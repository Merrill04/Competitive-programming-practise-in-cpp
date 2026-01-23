#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);

    long n;
    cin >> n;

    long long arr[n];
    for(long i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(n == 1){
        cout << arr[0];
        return 0;
    }

    long left = n-2;
    long long answer = arr[n-1];

    while(left >= 0){
        if(arr[left] < arr[left+1] && arr[left] > 0){
            answer += arr[left];
            left--;
        }else if(arr[left] == arr[left+1] && arr[left] > 0){
            answer += arr[left] - 1;
            arr[left] = arr[left+1] - 1;
            left--;
        }else if(arr[left] > arr[left+1] && arr[left+1] > 0){
            answer += arr[left+1] - 1;
            arr[left] = arr[left+1] - 1;
            left--;
        }else{
            break;
        }
    }

    cout << answer;
}