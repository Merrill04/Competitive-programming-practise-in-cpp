#include<iostream>
using namespace std;

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

int main(){
    int array[] = {1, 2, 3, 4};
    int length = sizeof(array)/sizeof(array[0]);

    cout << "Array before sorting : ";

    for(int i = 0; i < length; i++){
        cout << array[i] << " ";
    }

    cout << endl;

    cout << "Array after using bubble sort : ";

    bubblesort(array, length);

    for(int i = 0; i < length; i++){
        cout << array[i] << " ";
    }
}