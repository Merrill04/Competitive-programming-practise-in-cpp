#include<bits/stdc++.h>
using namespace std;

void checkkoshary(int a, int b){
    if( a % 2 != 0 && b % 2 != 0){
        cout << "NO" << "\n";
    }else{
        cout << "YES" << "\n";
    }
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int a, b;
        cin >> a >> b;

        checkkoshary(a , b);
    }

    return 0;
}