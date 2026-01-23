#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> v(t);

    for(int i = 0; i < t; i++){
        cin >> v[i];
    }

    for(int i = 0; i < v.size(); i++){
        if(v[i] / 10 <= 0){
            cout << 1 << endl;
            cout << v [i] << endl;
        }else{
            int count = 0;
            int final_count = 0;
            vector<int> temp;
            int n = v[i];

            while(n > 0){
                if(n % 10 != 0){
                    temp.push_back((n % 10) * round(pow(10, count)));
                    final_count++;
                    count++;
                    n = n / 10;
                }else{
                    count++;
                    n = n / 10;
                }
            }

            cout << final_count << endl;
            for(int k = 0; k < final_count; k++){
                cout << temp[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
