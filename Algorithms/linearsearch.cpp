#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int recursivesearch(vector<int> array, int x, int idx){
    if(idx == array.size()){
        return -1;
    }

    if(array[idx] == x){
        return idx+1;
    }

    return recursivesearch(array, x, idx+1);
}

/* Using normal for loop.
int search(vector<int> array, int n){
    int idx = -1;

    for(int i = 0; i < array.size(); i++){
        if(array[i] == n){
            idx = i;
        }
    }

    return idx;
}
*/

int main(){

    int size;
    cin >> size;

    vector<int> arr(size);

    for(int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }

    int x;

    cin >> x;

    int result = recursivesearch(arr, x, 0);

    if(result == -1){
        cout << "Element not found!";
    }else{
        cout << result;
    }
}