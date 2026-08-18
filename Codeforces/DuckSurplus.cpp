#include<bits/stdc++.h>
using namespace std;

long long calculate(vector<long long> v, long n){

    for(long i = 1; i < n; i++){
        if(v[i] < v[i-1]){
            long long temp = v[i];
            v[i] = v[i-1] + v[i];
            v[i-1] = temp;
        }
    }

    return v[v.size() - 1];
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        long n;
        cin >> n;

        vector<long long> v;
        for(long i = 0; i < n; i++){
            long long a;
            cin >> a;
            v.push_back(a);
        }

        long long ans = calculate(v, n);
        cout << ans << "\n";
    }

    return 0;
}