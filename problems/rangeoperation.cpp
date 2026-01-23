#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int maxsum(vector<int>& arr, int n){
    int sum = 0;

    int i = 0;

    while(i < n){
        if(arr[i] >= i+i+2){
            i++;
        }else{
            arr[i] = i+i+2;
            i++;
        }
    }

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    
    return sum; 
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int j = 0; j < n; j++){
            cin >> v[j];
        }

        int result = maxsum(v, n);

        cout << result;
    }

    return 0;
}