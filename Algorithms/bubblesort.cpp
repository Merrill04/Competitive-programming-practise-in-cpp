#include<iostream>
using namespace std;

/*Bubble sort: Check from start if start is less then its next then go on swapping till it reaches its position. example 
4 3 5 in array the 4 is greater than 3 then swap them check with 5 4 is less than 5 so 4 is in correct position. For 3 also
now 3 is less then 4 so its sorted now. */

/* Iterative approach:-

void bubblesort(int* arr, int length){
    for(int i = 0; i < length; i++){
        for(int j = 1; j < length - i; j++){
            if(arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
*/

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void bubblesortrecursive(int* arr, int length, int i = 1, int count = 1){
    if(count == length){
        return;
    }

    if(arr[i-1] > arr[i] && i < length){
        swap(arr[i-1], arr[i]);
        return bubblesortrecursive(arr, length, i+1, count);
    }else if(arr[i-1] <= arr[i] && i < length){
        return bubblesortrecursive(arr, length, i+1, count);
    }else if(i == length){
        return bubblesortrecursive(arr, length, i=1, count+1);
    }
}

int main(){
    int array[] = {1, 2, 3, 3, 4};
    int length = sizeof(array)/sizeof(array[0]);

    cout << "Array before sorting : ";

    for(int i = 0; i < length; i++){
        cout << array[i] << " ";
    }

    cout << endl;

    cout << "Array after using bubble sort : ";

//    bubblesort(array, length);
    bubblesortrecursive(array,length);

    for(int i = 0; i < length; i++){
        cout << array[i] << " ";
    }
}