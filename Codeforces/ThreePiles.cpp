#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        long long a;
        long long b;
        long long c;
        
        cin >> a >> b >> c;

        long long res = 0;

        if(b > a){
            res = max(b - a, (a + c) - b);
        }else{
            res = (a + c) - b;
        }

        cout << res << "\n";
    }

    return 0;
}