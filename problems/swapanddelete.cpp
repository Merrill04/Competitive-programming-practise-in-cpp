#include<bits/stdc++.h>
using namespace std;

int calc(string s){
    int count0 = 0;
    int count1 = 0;
    int ans = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0'){
            count0++;
        }else{
            count1++;
        }
    }

    int count = 0;
    int i = 0;
    while(i < s.length()){
        if(s[i] == '0'){
            if(count1 > 0){
                count++;
                count1--;
            }else{
                break;
            }
        }else{
            if(count0 > 0){
                count++;
                count0--;
            }else{
                break;
            }
        }

        i++;
    }

    ans = s.length() - count;

    return ans;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    for(int i = 0; i < t; i++){
        string s;
        cin >> s;

        int ans = calc(s);
        cout << ans << "\n";
    }

    return 0;
}