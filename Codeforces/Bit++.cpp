#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int x = 0;

    string arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == "++X" || arr[i] == "X++"){
            x++;
        }else{
            x--;
        }
    }

    cout << x;

    return 0;
}