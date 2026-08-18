#include<bits/stdc++.h>
using namespace std;

int calc(int n, string s){
    int val = 0;

    int i = 0;

    while(i < n){
        if(s[i] == '#'){
            i++;
        }else{
            int j = i;
            int temp = 0;
            while(j < n && s[j] != '#'){
                temp++;
                j++;
            }

            if(temp > 2){
                return 2;
            }else{
                val += temp;
            }

            i = j;
        }
    }

    return val;
}

int main(){
    int t;
    cin >> t;

    for(int i = 0 ; i < t; i++){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = calc(n, s);

        cout << ans << "\n";
    }

    return 0;
}