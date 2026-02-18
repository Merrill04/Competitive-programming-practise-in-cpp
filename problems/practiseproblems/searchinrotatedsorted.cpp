#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int recursivesearch(vector<int> array, int tar, int left, int right){

    if(left > right){
        return -1;
    }
    int mid = left + (right - left)/2;

    if(array[mid] == tar){
        return mid+1;
    }

    if(array[mid] >= array[left]){
        if(tar >= array[mid] && tar < array[right]){
            return recursivesearch(array, tar, left, mid-1);
        }else{
            return recursivesearch(array, tar, mid + 1, right);
        }
    }else{
        if(tar > array[mid] && tar <= array[left]){
            return recursivesearch(array, tar, mid + 1, right);
        }else{
            return recursivesearch(array, tar, left, mid - 1);
        }
    }
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

    cout << recursivesearch(arr, x, 0, size-1);

    return 0;
}