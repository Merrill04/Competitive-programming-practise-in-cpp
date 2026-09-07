#include<bits\stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string s;
        cin >> s;

        int countA = 0;
        int countB = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A'){
                countA++;
            }else{
                countB++;
            }
        }

        if(countA > countB){
            cout << "A";
        }else{
            cout << "B";
        }

        cout << "\n";
    }

    return 0;
}