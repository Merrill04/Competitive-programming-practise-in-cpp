#include<bits/stdc++.h>
using namespace std;

int calculate(vector<int> v, int n){
    int answer = 0;

    int small = v[0];

    for(int i = 1; i < v.size(); i++){
        if(v[i] < small){
            small = v[i];
        }else{
            v[i] = small;
        }
    }

    for(int i = 0; i < v.size(); i++){
        answer += v[i];
    }

    return answer;
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        vector<int> v;
        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            v.push_back(a);
        }

        int ans = calculate(v, n);
        cout << ans << "\n";
    }

    return 0;
}