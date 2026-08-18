#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    long n;
    cin >> n;

    long array[3] = {0};

    for(long i = 0; i < n; i++){
        long num;
        for(int j = 0; j < 3; j++){
            cin >> num;
            array[j] += num; 
        }
    }

    if(array[0] == array[1] && array[1] == array[2]){
        if(array[0] == 0){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }else{
        cout << "NO";
    }

    return 0;
}