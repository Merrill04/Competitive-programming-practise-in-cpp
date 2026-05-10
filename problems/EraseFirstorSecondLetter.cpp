#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

int calsubstr(string s, unordered_map<string , string>& map){
    if(s.length() == 1){
        return 1;
    }

    string a = s.substr(1);

    if(!map.count(a)){
        map.insert({a, "1"});
    }

    int left = calsubstr(a, map) + 1;

    string b = s.substr(0, 1) + s.substr(2);

    if(!map.count(b)){
        map.insert({b, "1"});
    }

    int right = calsubstr(b, map) + 1;

    return left+ right;
}

int main(){
    int t;
    cin >> t;

    vector<int> v;
    unordered_map<string , string> map;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int a = calsubstr(s, map);
        v.push_back(a);
    }

    for(int i = 0; i < t; i++){
        cout << v[i] << "\n";
    }

    return 0;
}