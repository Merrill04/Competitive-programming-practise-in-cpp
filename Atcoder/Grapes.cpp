#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < (m % n); i++){
        if(m % n == 0){
            cout << m / n << "\n";
        }else{
            cout << (m / n) + 1 << "\n";
        }
    }

    for(int i = (m % n); i < n; i++){
        cout << m / n << "\n";
    }

    return 0;
}