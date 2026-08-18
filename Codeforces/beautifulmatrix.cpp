#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[5][5];
    int a = 0;
    int b = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                a = i + 1;
                b = j + 1;
            }
        }
    }

    int answer = 0;

    if( a >= 3){
        answer += a - 3;
    }else{
        answer += 3 - a;
    }

    if(b >= 3){
        answer += b - 3;
    }else{
        answer += 3 - b;
    }

    cout << answer;

    return 0;
}