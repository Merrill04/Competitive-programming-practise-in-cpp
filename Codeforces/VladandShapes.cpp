#include<bits/stdc++.h>
using namespace std;

string check(int n, vector<vector<char>> v){
    int count = 0;
    int idx = -1;

    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < n; j++){
            if(v[i][j] == '1'){
                idx = i;
                flag = true;
                break;
            }
        } 
        
        if(flag == true){
            break;
        }
    }

    for(int i = idx; i < idx + 1; i++){
        for(int j = 0; j < n; j++){
            if(v[i][j] == '1'){
                count++;
            }
        } 
    }

    if(idx + 1 == n){
        return "SQUARE";
    }

    int c = 0;

    for(int i = idx + 1; i < idx + 2; i++){
        for(int j = 0; j < n; j++){
            if(v[i][j] == '1'){
                c++;
            }
        }
    }

    if(count == c){
        return "SQUARE";
    }

    return "TRIANGLE";
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        vector<vector<char>> v;

        for(int j = 0; j < n; j++){
            vector<char> a;
            for(int k = 0; k < n; k++){
                char t;
                cin >> t;
                a.push_back(t);
            }

            v.push_back(a);
        }

        string res = check(n, v);
        cout << res << "\n";
    }

    return 0;
}