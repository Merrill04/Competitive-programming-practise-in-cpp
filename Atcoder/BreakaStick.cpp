#include<bits/stdc++.h>
using namespace std;

int getmin(int n, vector<int> v){
    vector<long> a(n+1);
    vector<long> b(n+1);

    for(int i = 1; i < n + 1; i++){
        a[i] = (long) ((long)a[i-1] + (long)v[i-1]);
    }

    for(int i = n-1; i >= 0; i--){
        b[i] = (long)((long)b[i+1] + (long)v[i]);
    }

    int min = INT_MAX;

    for(int i = 0; i < n+1; i++){
        if(abs(a[i] - b[i]) < min){
            min = abs(a[i] - b[i]);
        }
    }

    return min;
}

int main(){
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    cout << getmin(n, v);

    return 0;
}