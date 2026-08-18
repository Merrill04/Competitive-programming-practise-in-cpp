#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string checksorted(vector<int> array, int start){
    if(start >= array.size()){
        return "Sorted!";
    }

    if(array[start] > array[start+1]){
        return "Not sorted!";
    }

    return checksorted(array, start+1);
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << checksorted(arr, 0);

    return 0;
}