#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> recursivesearch(vector<int> array, int x, int idx, vector<int>& result){
    if(idx == array.size()){
        return result;
    }

    if(array[idx] == x){
        result.push_back(idx);
    }

    return recursivesearch(array, x, idx+1, result);
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

    vector<int> result;

    recursivesearch(arr, x, 0, result);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << ", ";
    }
}