#include<bits/stdc++.h>
using namespace std;

long solve(int n, int k, vector<int> v){
    if(k <= 1){
        return k;
    }

    unordered_map<int, long> m;

    for(int i = 0; i < n; i++){
        m[v[i]] += 1;
    }

    long max = -1;

    for(auto &i : m){
        if(i.second > max){
            max = i.second;
        }
    }

    long count = 0;

    for(auto &i : m){
        if(abs(i.second - max) <= 1){
            count++;
        }
    }

    return count;
}

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    cout << solve(n, k, v);

    return 0;
}