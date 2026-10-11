#include<bits/stdc++.h>
using namespace std;

void calculate(int i, int total, int w, int curr, vector<vector<int>>& v, vector<int>& res){
    if(i >= v.size()){
        res[0] = max(curr, res[0]);
        return;
    }

    calculate(i + 1, total, w, curr, v, res);

    if(v[i][1] <= w && total + v[i][1] <= w){
        calculate(i + 1, total + v[i][1], w, curr + v[i][0], v, res);
    }
}

int main(){
    int n, w;
    cin >> n >> w;

    vector<vector<int>> v(n, vector<int>(2));

    for(int i = 0; i < n; i++){
        cin >> v[i][0];
        cin >> v[i][1];
    }

    vector<int> res(1);

    calculate(0, 0, w, 0, v, res);

    cout << res[0];

    return 0;
}