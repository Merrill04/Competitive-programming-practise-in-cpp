#include<bits/stdc++.h>
using namespace std;

int calc(int a, int b, int c){
    if(a == b || b == c || a == c){
        return 0;
    }

    int min = 11;
    if(abs(a - b) < min){
        min = abs(a - b);
    }

    if(abs(b - c) < min){
        min = abs(b - c);
    }

    if(abs(a - c) < min){
        min = abs(a - c);
    }

    return min;
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int a, b, c;
        cin >> a >> b >> c;

        int res = calc(a, b, c);
        cout << res << "\n";
    }

    return 0;
}