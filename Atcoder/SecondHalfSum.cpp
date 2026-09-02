#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    int sum = 0;

    for(int i = (n / 2); i < n; i++){
        sum += v[i];
    }

    cout << sum;
    
    return 0;
}