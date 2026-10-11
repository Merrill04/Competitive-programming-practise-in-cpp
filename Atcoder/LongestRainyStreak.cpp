#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int res = 0;

    for(int i = 0; i < n;){
        if(s[i] == 'R'){
            int count = 0;
            int j = i;

            while(j < n && s[j] == 'R'){
                count++;
                j++;
            }

            i = j;
            res = max(res, count);
        }else{
            i++;
        }
    }

    cout << res;

    return 0;
}