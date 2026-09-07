#include<bits/stdc++.h>
using namespace std;

int getmax(int n, vector<int> v){
    int odd = 0;
    int mod0 = 0;
    int mod2 = 0;

    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 1){
            odd++;
        }

        if(v[i] % 4 == 0){
            mod0++;
        }

        if(v[i] % 4 == 2){
            mod2++;
        }
    }

    return max(odd, max(mod0, mod2));
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

        int res = getmax(n, v);
        cout << res << "\n";
    }

    return 0;
}