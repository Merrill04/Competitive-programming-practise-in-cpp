#include<bits/stdc++.h>
using namespace std;

int calculate(int n, vector<int> a, vector<int> b){
    int swaps = 0;

    int i = 0;
    while(i < a.size()){
        if(a[i] <= b[i]){
            i++;
        }else{
            int min = a[i];
            int idx = i;
            int temp = i + 1;
            while(temp < a.size()){
                if(a[temp] < min && a[temp] <= b[i]){
                    idx = temp;
                    break;
                }
                temp++;
            }

            if(idx == i){
                return -1;
            }

            while(idx > i){
                int temp = a[idx];
                a[idx] = a[idx - 1];
                a[idx - 1] = temp;
                swaps++;
                idx--;
            }

            i++;
        }
    }

    return swaps;
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        vector<int> a;
        vector<int> b;

        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            a.push_back(temp);
        }

        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            b.push_back(temp);
        }

        int ans = calculate(n, a, b);
        cout << ans << "\n";
    }

    return 0;
}