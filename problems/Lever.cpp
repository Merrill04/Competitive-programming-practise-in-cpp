#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int calculatelever(int n, vector<int> f, vector<int> s){
    int count = 0;

    for(int i = 0; i < n; i++){
        if(f[i] > s[i]){
            count += f[i] - s[i]; 
        }
    }

    return count + 1;
}
 
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        vector<int> first;
        vector<int> second;

        cin >> n;

        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            first.push_back(a);
        }

        for(int j = 0; j < n; j++){
            int b;
            cin >> b;
            second.push_back(b);
        }

        int answer = calculatelever(n, first, second);
        cout << answer << "\n";
    }
 
    return 0;
}