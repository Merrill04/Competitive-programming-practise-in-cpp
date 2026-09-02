#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    unordered_map<int, int> m;

    for(int i = 0; i < n; i++){
        m[v[i]] += 1;
    }

    int sum = 0;

    for(auto &i : m){
        if(i.second % 2 != 0){
            sum += i.first;
        }
    }

    cout << sum;

    return 0;
}