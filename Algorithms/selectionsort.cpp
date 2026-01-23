#include<iostream>
using namespace std;

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

int main(){
    int array[] = {4, 3, 2, 1, 1};
    int length = sizeof(array)/sizeof(array[0]);

    cout << "Array before sorting : ";

    for(int i = 0; i < length; i++){
        cout << array[i] << " ";
    }

    cout << endl;

    cout << "Array after using selection sort : ";

    selectionsort(array, length);

    for(int i = 0; i < length; i++){
        cout << array[i] << " ";
    }
}