#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

class minheap{
    int capacity;
    int curr_size;
    int* arrptr;
    public:
        minheap(int a){
            capacity = a;
            arrptr = new int[a];
            curr_size = 0;
        }

        void display_heap();
        void insert_heap(int val);
        void delete_heap();
        void display_currentsize();
        void minheapify(vector<int>& v);
        void heapify(vector<int>& v, int i);
        void heapsort(vector<int>& v, int size);//Here we have a min-heap. so if we want to sort in ascending order what we can do is just print top
        //and delete it. Then again at top we will have smallest element so like this we can go on deleting until the arrptr is 
        //empty. 
        //If we want to sort is descending order than what we can do is we know that  first element is minimum in min heap.
        //So algorithm is like:
        //swap the first and last element of min-heap. This will take the smallest to the last position.
        //reduce curr_size by one as the last element is in correct position and we dont want to look over it now.
        //Then take the first element to its correct position using heapify.
        //Once the element is in correct position we will again get the min heap. That is we will get the smallest at the top.
        //continue this process until curr_size == 0
        //After this the heap will be sorted in ascending order.

        //Now for max heap if we want in descending order then we can delete the first element as its maximum and then go on
        //doing it until last. which will give in descending order.
        //If max heap is to be converted ascending order than same procedure is to be followed as for the minheap conversion to
        //descending order.

        //Note: Min heap to ascending order doesnt convert the heap it just outputs and goes on deleting.
        //Similarly the max-heap to descending order does not convert the heap. 
        //If you want to conver the heap then:
        //If given max heap and told to convert in descending order then first convert max to min heap and then min heap to 
        //descending order.
        //Similarly for min heap to ascending we need to convert it to max heap and then max heap to ascending order.

        ~minheap(){
            delete[] arrptr;
        }
};

void minheap :: display_heap(){
    for(int i = 0; i < curr_size; i++){
        cout << arrptr[i] << " ";
    }
    cout << "\n";
}

void minheap:: display_currentsize(){
    cout << curr_size << "\n";
}

void minheap :: insert_heap(int val){
    if(curr_size == capacity){
        cout << "The heap is full!" << "\n";
        return;
    }

    arrptr[curr_size] = val;

    int i = curr_size;
    curr_size++;
    while(i >= 0){
        int t = (i - 1) / 2;

        if(arrptr[t] > arrptr[i]){
            swap(arrptr[t], arrptr[i]);
            i = t;
        }else{
            break;
        }
    }
}

void minheap:: delete_heap(){
    if(curr_size == 0){
        cout <<"Heap is empty, Nothing to delete!" << "\n";
        return;
    }

    arrptr[0] = arrptr[curr_size - 1];
    arrptr[curr_size - 1] = 0;
    curr_size--;

    int i = 0;
    while(i < curr_size){
        int left = (i * 2) + 1;
        int right = (i * 2) + 2;

        if(right < curr_size && arrptr[left] > arrptr[right] && arrptr[i] > arrptr[right]){
            swap(arrptr[right], arrptr[i]);
            i = right;
        }else if(right < curr_size && left < curr_size && arrptr[left] <= arrptr[right] && arrptr[i] > arrptr[left]){
            swap(arrptr[left], arrptr[i]);
            i = left;
        }else{
            break;
        }
    }
}

void minheap :: minheapify(vector<int>& v){
    for(int i = (v.size() / 2) - 1; i >= 0; i--){//What this loop does is that it doesnt consider the leaft nodes.                                                 //
        heapify(v, i);                      //The n/2 - 1 uptill 0 are the nodes to be placed in right positions.
    }
}

void minheap :: heapify(vector<int>& v, int i){
    int left = (i * 2) + 1;
    int right = (i * 2) + 2;
    bool leftflag = false;
    bool rightflag = false;

    if(right < v.size()){
        if(v[left] < v[right]){
            if(v[i] > v[left]){
                swap(v[i], v[left]);
                leftflag = true;
            }
        }else{
            if(v[i] > v[right]){
                swap(v[i], v[right]);
                rightflag = true;
            }
        }
    }else if(left < v.size()){
        if(v[i] > v[left]){
            swap(v[i], v[left]);
            leftflag = true;
        }
    }

    if(leftflag == true){
        heapify(v, left);
    }

    if(rightflag == true){
        heapify(v, right);
    }
}

void minheap :: heapsort(vector<int>& v, int size){
    for(int i = size - 1; i >= 0; i--){
        swap(v[0], v[i]);
        int j = 0;
        int t_size = i - 1;
        while(j <= t_size){
            int left = (j * 2) + 1;
            int right = (j * 2) + 2;

            if(right <= t_size && v[left] > v[right] && v[j] > v[right]){
                swap(v[right], v[j]);
                j = right;
            }else if(right <= t_size && left <= t_size && v[left] <= v[right] && v[j] > v[left]){
                swap(v[left], v[j]);
                j = left;
            }else{
                break;
            }
        }
    }
}


int main(){
    minheap h(10);

    h.insert_heap(2);
    h.insert_heap(4);
    h.insert_heap(3);
    h.insert_heap(5);
    h.insert_heap(1);

    h.display_heap();
    h.display_currentsize();
    h.delete_heap();
    h.display_heap();
    h.delete_heap();
    h.display_heap();

    vector<int> array = { 5, 6, 2, 1, 3};
    h.minheapify(array);

    for(int i = 0; i < array.size(); i++){
        cout << array[i] << " ";
    }
    cout << "\n";

    h.heapsort(array, array.size());
    
    for(int i = 0; i < array.size(); i++){
        cout << array[i] << " ";
    }

    return 0;
}