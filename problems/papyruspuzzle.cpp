#include<bits/stdc++.h>
using namespace std;

int calculate(vector<int> a, vector<int> b, int c, int n){
    int count = 0;
    bool flag = true;

    for(int i = 0; i < n; i++){
        if(a[i] < b[i]){
            flag = false;
        }
    }

    if(flag == false){
        count += c;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool f = true;

        for(int i = 0; i < n; i++){
            if(a[i] < b[i]){
                f = false;
                break;
            }
        }

        if(f == false){
            return -1;
        }

        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                count += (a[i] - b[i]);
            }
        }
    }else{
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                count += (a[i] - b[i]);
            }
        }
    }

    return count;
}

int main(){

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, c;
        cin >> n >> c;

        vector<int> a;
        vector<int> b;

        for(int i = 0; i < n; i++){
            int d;
            cin >> d;
            a.push_back(d);
        }

        for(int i = 0; i < n; i++){
            int d;
            cin >> d;
            b.push_back(d);
        }

        cout << calculate(a, b, c, n) << "\n";
    }

    return 0;
}