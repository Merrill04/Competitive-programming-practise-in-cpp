/* 1. Divide the given array into half until only one element is left.
   2. Then when the base condition is reached start merging during return. 
   3. Merge in sorted order.

   Time complexity: O(n logn)

   For the time complexity the array is divided in two parts until the element remaining in array is one. So each recursive call
   call divides array so for this it will be logn. Then while returning the array it needs to be sorted while returning. So hence
   for each recursive call while returning the array is getting sorted with each call which requires two pointer approach the is 
   time complexity of n. So hence overall time complexity is O(n logn).
   How logn is coming? At each level array is being divided by 2 raised to level times. 
   at level 1 the array is divided into 2 raised to 1. so 2 arrays are formed.
   at level 2 the array is divided into 2 raised to 2. so 4 arrays are formed. 
   when we take logarithm it equals to logn.
   Refer the tree for better picture.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*This is the code for merge sort without inplace sorting. Here it is creating the new array everytime the recursion 
calls are made.
The flow of the program:

1. array of the given size is passed.
2. the array is divided into two halfs left and right.
3. this division is happening with each recursion call until only 1 element is left inside the array. 
4. when base case is reached then the return starts executing.
5. First the array is returned. Then the merge between the array happens.
For more refer image of recursion tree provided.


vector<int> merge(vector<int> array1, vector<int> array2){
    vector<int> sorted(array1.size() + array2.size());
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < array1.size() && j < array2.size()){
        if(array1[i] < array2[j]){
            sorted[k] = array1[i];
            i++;
        }else{
            sorted[k] = array2[j];
            j++;
        }

        k++;
    }

    while(j < array2.size()){
        sorted[k] = array2[j];
        j++;
        k++;
    }

    while(i < array1.size()){
        sorted[k] = array1[i];
        i++;
        k++;
    }

    return sorted;
}

vector<int> mergesort(vector<int> array){
    if(array.size() == 1){
        return array;
    }

    int mid = array.size() / 2;

    vector<int> array1(array.begin(), array.begin()+mid);
    vector<int> array2(array.begin()+mid, array.begin()+array.size());

    vector<int> left = mergesort(array1);
    vector<int> right = mergesort(array2);

    return merge(left , right);
}

*/

void merge(vector<int>& array, int left, int mid, int right){
    vector<int> newarr(right - left);

    int i = left;
    int j = mid;
    int k = 0;

    while(i < mid && j < right){
        if(array[i] < array[j]){
            newarr[k] = array[i];
            i++;
        }else{
            newarr[k] = array[j];
            j++;
        }
        k++;
    }

    while(j < right){
        newarr[k] = array[j];
        j++;
        k++;
    }

    while(i < mid){
        newarr[k] = array[i];
        i++;
        k++;
    }

    for(int i = 0; i < newarr.size(); i++){
        array[left + i] = newarr[i];
    }
}

void mergesort(vector<int>& array, int left, int right){
    if(right - left == 1){
        return;
    }

    int mid = left + ((right-left) / 2);

    mergesort(array, left, mid);
    mergesort(array, mid, right);

    merge(array, left, mid, right);
}

int main(){
    vector<int> arr = {4, 5, 1, 2, 3, 6};

//    arr = mergesort(arr);
    mergesort(arr, 0, arr.size());

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;

}