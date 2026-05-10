#include<bits/stdc++.h>
using namespace std;

int calculate(vector<long long> v){
    int answer = 0;

    int i = v.size() - 2;

    while(i >= 0){
        long long temp = v[i] + v[i+1];
        if(temp > 0 && temp > v[i]){
            v[i] = temp;
        }
        i--;
    }

    for(int k = 0; k < v.size(); k++){
        if(v[k] > 0){
            answer++;
        }
    }

    return answer;
}

int main(){
    int t;
    cin >> t;

    vector<vector<long long>> v;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<long long> input;
        for(int j = 0; j < n; j++){
            long long a;
            cin >> a;
            input.push_back(a);
        }

        v.push_back(input);
    }

    for(int i = 0; i < t; i++){
        int answer = calculate(v[i]);
        cout << answer << "\n";
    }
}