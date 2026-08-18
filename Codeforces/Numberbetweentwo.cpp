#include<bits/stdc++.h>
using namespace std;

void check(vector<long long> v){
    long long a = v[0];
    long long b = v[1];

    if(a - b == 1){
        cout << "NO" << "\n";
        return;
    }

    int i = 2;
    bool flag = false;
    while(a * i < b){
        if(b % (a * i) != 0){
            cout << "YES" << "\n";
            flag = true;
            break;
        }
        i++;
    }

    if(flag == false){
        cout << "NO" << "\n";
    }
}

int main(){
    int t;
    cin >> t;

    vector<vector<long long>> v;

    for(int i = 0; i < t; i++){
        vector<long long> ip;
        long long a, b;
        cin >> a >> b;
        ip.push_back(a);
        ip.push_back(b);
        v.push_back(ip);
    }

    for(int i = 0; i < t; i++){
        check(v[i]);
    }

    return 0;
}