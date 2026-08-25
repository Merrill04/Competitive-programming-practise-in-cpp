#include<bits/stdc++.h>
using namespace std;

void check(long long n, long long m, long long k, vector<long long> v){
    long long count = 0;
    long long sum = 0;
    
    for(long long i = 0; i < n; i++){
        if(count <= m){
            if(v[i] < k){
                sum += v[i];
                if(sum < k){
                    cout << "YES" << "\n";
                }else{
                    sum -= v[i];
                    cout << "NO" << "\n";
                }
            }else{
                cout << "NO" << "\n";
            }

            count++;

            if(count == m){
                count = 0;
                sum = 0;
            }
        }
    }
}

int main(){
    long long n, m, k;
    cin >> n >> m >> k;

    vector<long long> v;

    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        v.push_back(a);
    }

    check(n, m, k, v);

    return 0;
}