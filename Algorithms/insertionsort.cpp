#include <iostream>
using namespace std;

void insertionsort(int arr[], int length){
    for(int i = 1; i < length; i++){
        int element = arr[i-1];
        int secele = arr[i];
        bool flag = true;

        while(flag){
            if(element > secele){
                
            }
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

    cout << "Array after using insertion sort : ";

    insertionsort(array, length);

    for(int i = 0; i < length; i++){
        cout << array[i] << " ";
    }
}