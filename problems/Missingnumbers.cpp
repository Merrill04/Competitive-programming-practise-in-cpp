#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;

    vector<long> array;

    for(long i = 0; i < n-1; i++){
        long a;
        cin >> a;
        array.push_back(a);
    }

    long total = (n * (n+1)) / 2;

    long sum = 0;

    for(long i = 0; i < array.size(); i++){
        sum += array[i];
    }

    cout << total - sum;
}