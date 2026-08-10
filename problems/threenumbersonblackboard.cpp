#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

long long solve(long long x, long long y, long long z){
    if(x == y && y == z){
        return 0;
    }

    long long ans = 0;

    if(x > y && x > z){
        if(y + z < x){
            x = y + z;
        }
        
        long long min = 0;

        if(y >= z){
            min = z;
        }else{
            min = y;
        }

        ans = x - min;
    }else if(y > x && y > z){
        if(x + z < y){
            y = x + z;
        }

        long long min = 0;

        if(x >= z){
            min = z;
        }else{
            min = x;
        }

        ans = y - min;
    }else if(z > x && z > y){
        if(x + y < z){
            z = x + y;
        }

        long long min = 0;

        if(x >= y){
            min = y;
        }else{
            min = x;
        }

        ans = z - min;
    }else{
        long long mi = min({x, y, z});
        long long ma = max({x, y, z});

        ans = ma - mi;
    }

    return ans;
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        long long x, y, z;

        cin >> x >> y >> z;

        cout << solve(x, y, z) << "\n";
    }

    return 0;
}