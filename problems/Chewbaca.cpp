#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    double a = 0;

    long long answer = 0;

    int count = 0;

    while(n > 0){
        a = n % 10;

        if(a == 9 && n / 10 == 0){
            answer += round((pow(10, count) * 9));
            break;
        }

        if(a < 9 - a){
            answer += round((pow(10, count) * a));
            n = n / 10;
        }else{
            answer += round((pow(10, count) * (9 - a)));
            n = n / 10;
        }

        count++;
    }

    cout << answer;

    return 0;
}