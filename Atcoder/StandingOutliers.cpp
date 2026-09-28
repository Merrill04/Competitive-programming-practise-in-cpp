#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;

    vector<int> dist;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        dist.push_back(a);
    }

    vector<int> closest(n);

    for(int i = 0; i < n; i++){
        int min = INT_MAX;

        for(int j = 0; j < n; j++){
            if(i != j){
                if(abs(dist[i] - dist[j]) < min){
                    closest[i] = dist[j];
                    min = abs(dist[i] - dist[j]);
                }
            }
        }
    }

    int count = 0;
    vector<int> res;

    for(int i = 0; i < n; i++){
        if(abs(dist[i] - closest[i]) >= d){
            count++;
            res.push_back(i + 1);
        }
    }

    if(count == 0){
        cout << 0;
    }else{
        cout << count << "\n";

        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
    }

    return 0;
}   