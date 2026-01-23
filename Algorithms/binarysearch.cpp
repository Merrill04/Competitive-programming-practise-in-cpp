#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int search(vector<int> array, int n){
    int left = 0;
    int right = array.size()-1;

    while(left < right){
        int mid = left + (right - left) / 2;

        if(array[mid] == n){
            return mid;
        }else if(array[mid] > n){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }

    return -1;
}

int main(){
    int size;
    cin >> size;

    vector<int> arr(size);

    for(int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }

    int x;

    cin >> x;

    int result = search(arr, x);

    if(result == -1){
        cout << "Element not found!";
    }else{
        cout << result;
    }
}