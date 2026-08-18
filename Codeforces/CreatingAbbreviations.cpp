#include<bits/stdc++.h>
using namespace std;

void check(vector<string> strings, int n, vector<string> abbrevations, int m){
    vector<int> words(26, -1);
    bool flag = true;

    for(int i = 0; i < n; i++){
        words[strings[i][0] - 'a'] = 1;
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < abbrevations[i].length(); j++){
            if(words[abbrevations[i][j] - 'A'] == -1){
                flag = false;
                break;
            }
        }

        if(flag == false){
            break;
        }
    }

    if(flag == false){
        cout << "NO" << "\n";
    }else{
        cout << "YES" << "\n";
    }
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, m;
        cin >> n >> m;

        vector<string> strings;
        vector<string> abbrevations;

        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            strings.push_back(s);
        }

        for(int i = 0; i < m; i++){
            string s;
            cin >> s;
            abbrevations.push_back(s);
        }

        check(strings, n, abbrevations, m);
    }

    return 0;
}