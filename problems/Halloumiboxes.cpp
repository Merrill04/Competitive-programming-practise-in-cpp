#include<bits/stdc++.h>
using namespace std;

void check(int n, int k, vector<int> v){
    int flag = true;

    for(int i = 0; i < n - 1; i++){
        if(v[i] > v[i + 1]){
            flag = false;
            break;
        }
    }

    if(k == 1 && flag == false){
        cout << "NO" << "\n";
    }else{
        cout << "YES" << "\n";
    }

}

int main(){
    int t;

    cin >> t;

    for(int i = 0; i < t; i++){
        int n, k;

        cin >> n >> k;

        vector<int> v;

        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            v.push_back(a);
        }

        check(n, k, v);
    }

    return 0;
}