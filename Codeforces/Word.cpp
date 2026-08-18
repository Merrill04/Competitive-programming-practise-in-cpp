#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int countupper = 0;
    int countlower = 0;

    for (int i = 0; i < s.length(); i++){
        int a = s[i];

        if (a >= 65 && a <= 90){
            countupper++;
        }
        else if (a >= 97 && a <= 122){
            countlower++;
        }    
    }

    if(countlower >= countupper){
        for (int i = 0; i < s.length(); i++){
            int a = s[i];

            if (a >= 65 && a <= 90){
                s[i] += 32;
            }
        }
    }else{
        for (int i = 0; i < s.length(); i++){
            int a = s[i];

            if (a >= 97 && a <= 122){
                s[i] -= 32;
            }
        }
    }

    cout << s;
}