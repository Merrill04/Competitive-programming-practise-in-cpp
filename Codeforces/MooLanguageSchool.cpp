#include<bits/stdc++.h>
using namespace std;

int getmin(int n, int k, string s){
    int res = 0;

    for(int i = 0; i < s.length(); i += k){
        bool flag = true;
        for(int j = i; j < i + k; j++){
            if(s[j] == '0'){
                flag = false;
                break;
            }
        }

        if(flag == true){
            res += 1;
        }
    }

    return res;
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int res = getmin(n, k, s);
        cout << res << "\n";
    }

    return 0;
}