#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;

    vector<long> v;
    long moves = 0;

    for(long i = 0; i < n; i++){
        long a;
        cin >> a;
        v.push_back(a);
    }

    for(long i = 1; i < v.size(); i++){
        if(v[i] < v[i-1]){
            moves += v[i-1] - v[i];
            v[i] += v[i-1] - v[i];
        }
    }

    cout << moves;

    return 0;
}