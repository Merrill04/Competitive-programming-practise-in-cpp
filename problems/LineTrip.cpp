#include<bits/stdc++.h>
using namespace std;

int calc(int n, int x, vector<int> v){
    int dist1 = -1;
    int dist2 = -1;
    int dist3 = -1;

    dist1 = v[0];
    dist2 = (x - v[n-1]) * 2;

    for(int i = 0; i < n-1; i++){
        if(dist3 < v[i+1] - v[i]){
            dist3 = v[i+1] - v[i];
        }
    }

    return max(dist1, max(dist2, dist3));
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, x;

        cin >> n >> x;

        vector<int> gastations;

        for(int i = 0; i < n; i++){
            int a; 
            cin >> a;
            gastations.push_back(a);
        }

        int ans = calc(n, x, gastations);
        cout << ans << "\n";
    }

    return 0;
}