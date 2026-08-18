#include<bits/stdc++.h>
using namespace std;

int solve(string s, int n){
    int ans = 1, x = 0;
    
    for(int i = 1; i < n; i++) {
        if(s[i] != s[i - 1]){
            ans++;
        }

        if(i == n - 1){
            break;
        }
            
        if(s[i] != s[i - 1] && s[i] != s[i + 1]){
            if(s[i + 1] == s[i - 1]){
                x = 2;
            }else{
                x = max(x, 1);
            } 
        }
    }
    
    return ans - x;;
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << solve(s, n) << "\n";
    }

    return 0;
}
