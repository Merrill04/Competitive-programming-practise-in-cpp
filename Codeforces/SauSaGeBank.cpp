#include<bits/stdc++.h>
using namespace std;

long long getans(int n, int k){
    long long res = 1;

    if(k == 1){
        for(int i = 0; i < n; i++){
            res *= 2;
        }

        return res;
    }

    long long temp = 2 * (k - 1);

    for(int i = k - 1; i < n; i++){
        res *= 2;
    }

    return res + temp;
}

int main(){

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;

        long long res = getans(n , k);
        cout << res << "\n";
    }

    return 0;
}