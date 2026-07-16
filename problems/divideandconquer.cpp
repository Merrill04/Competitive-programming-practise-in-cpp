#include<bits/stdc++.h>
using namespace std;

void check(int a, int b){
    if(a < b){
        cout << "NO" << "\n";
        return;
    }

    if(a % b == 0){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int a, b;
        cin >> a >> b;

        check(a, b);
    }

    return 0;
}