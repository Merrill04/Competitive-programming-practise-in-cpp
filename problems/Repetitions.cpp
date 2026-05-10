#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;

    cin >> a;

    long max = 0;
    long count = 1;
    for(long i = 1; i < a.length(); i++){
        if(a[i] == a[i-1]){
            count++;
        }else{
            if(max < count){
                max = count;
            }
            count = 1;
        }
    }

    if(max < count){
        max = count;
    }

    cout << max;

    return 0;
}