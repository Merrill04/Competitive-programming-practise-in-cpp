#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int count = 0;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count > 0){
        return false;
    }

    return true;
}

int main(){
    int answer = 0;

    int n;
    cin >> n;

    for(int i = 6; i <= n; i++){
        int primecount = 0;

        for(int j = 2; j <= i/2; j++){
            if(i % j == 0 && isPrime(j)){
                primecount++;
            }
        }

        if(primecount == 2){
            answer += 1;
        }
    }

    cout << answer;

    return 0;
}