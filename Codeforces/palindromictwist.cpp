#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void checkpalindrome(string &s){
    char temp[s.length()];

    for(int i=0;i<s.length();i++){
        temp[i] = s[i];
    }

    for(int i=0;i<ceil(s.length()/2);i++){
        int n = (int)s[i];
        int m = (int)temp[s.length()-i-1];

        if(n != m){
            if(n - 1 == m + 1 || n - 1 == m - 1 || n + 1 == m + 1 || n + 1 == m - 1){
                continue;
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    vector<int> len;
    vector<string> str;

    for(int i=0;i<n;i++){
        int length;
        cin >> length;
        cout << endl;

        len.push_back(length);

        string s;
        cin >> s;

        str.push_back(s);
    }

    for(int i=0;i<n;i++){
        checkpalindrome(str[i]);
    }

    return 0;
}