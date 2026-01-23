#include <iostream>
using namespace std;

void insertionsort(int arr[], int length){
    for(int i = 1; i < length; i++){
        int a = i;
        int key = arr[a];
        
        while(a > 0){
            if(arr[a] < arr[a-1]){
                int temp = arr[a-1];
                arr[a-1] = arr[a];
                arr[a] = temp;
                a--;
            }else{
                break;
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