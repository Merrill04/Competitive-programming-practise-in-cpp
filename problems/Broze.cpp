#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string answer;

    int i = 0;
    
    while(i < s.length()){
        if(s[i] == '.'){
            if(i == s.length() - 1){
                answer += "0";
                i += 1;
            }else if(s[i+1] == '-'){
                answer += "0";
                i += 1;
            }else{
                answer += "0";
                i += 1;
            }
        }else if(s[i] == '-' && s[i+1] == '.'){
            answer += "1";
            i += 2;
        }else if(s[i] == '-' && s[i+1] == '-'){
            answer += "2";
            i += 2;
        }
    }

    cout << answer;
}