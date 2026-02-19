#include<iostream>
using namespace std;
/* Selection sort: Take the largest element and swap with the last element. Then check in remaining array that is first to last-1.*/

/* Iterative approach:-

void selectionsort(int arr[], int length){
    int element;
    int position;
    for(int i = 0; i < length-1; i++){
        element = arr[i];
        position = i;

        for(int j = i+1; j < length; j++){
            if(arr[j] < element){
                element = arr[j];
                position = j;
            }
        }

        if(position != i){
            int temp = arr[i];
            arr[i] = arr[position];
            arr[position] = temp;
        }
    }
}
*/

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void recursiveselectionsort(int* arr, int length, int last, int idx=0, int i = 0, int count=0, int largestelement = 0){
    if(count == length){
        return;
    }

    if(arr[i] > largestelement && i < last){
        largestelement = arr[i];
        idx=i;
        return recursiveselectionsort(arr, length, last, idx, i+1,count, largestelement);
    }else if(i == last){
        if(arr[last] < largestelement){
            swap(arr[last], arr[idx]);
            return recursiveselectionsort(arr, length, last-1, 0, 0 ,count+1, 0);
        }else{
            return recursiveselectionsort(arr, length, last-1, 0, 0,count+1, 0);
        }
    }else if(arr[i] < largestelement && i < last){
        return recursiveselectionsort(arr, length, last, idx, i+1,count, largestelement);
    }

}

int main(){
    int array[] = {4, 3, 2, 2, 1};
    int length = sizeof(array)/sizeof(array[0]);

    cout << "Array before sorting : ";

    for(int i = 0; i < length; i++){
        cout << array[i] << " ";
    }

    cout << endl;

    cout << "Array after using selection sort : ";

//    selectionsort(array, length);
    recursiveselectionsort(array, length, length-1);

    for(int i = 0; i < length; i++){
        cout << array[i] << " ";
    }
}