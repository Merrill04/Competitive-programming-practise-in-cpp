#include<bits/stdc++.h>
using namespace std;

void check(int n, int k, string s){
    unordered_map<char, int> m;

    for(int i = 0; i < n; i++){
        if(m.find(s[i]) != m.end()){
            m[s[i]] += 1;
        }else{
            m[s[i]] = 1;
        }
    }

    int oddcount = 0;
    int totalodd = 0;

    for(auto &i : m){
        if(i.second % 2 != 0){
            oddcount += i.second;
            totalodd++;
        }
    }

    if(oddcount - 1 <= k || totalodd - 1 <= k){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
}

int main(){
    int t;
    cin >> t;

    for(int i = 0 ; i < t; i++){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        check(n, k, s);
    }

    return 0;
}