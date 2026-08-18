#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<long> friends(n, 0);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        
        friends[a - 1] += b;
        friends[b - 1] += a;
    }

    long max = 0;

    for(int i = 0; i < n; i++){
        if(friends[i] > max){
            max = friends[i];
        }
    }

    cout << max;

    return 0;
}