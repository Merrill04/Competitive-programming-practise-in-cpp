#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        vector<int> arr(3);

        for(int j = 0; j < 3; j++){
            int a;
            cin >> a;
            arr[j] = a;
        }

        int min = INT_MAX;

        for(int j = 0; j < 3; j++){
            if(arr[j] < min){
                min = arr[j];
            }
        }

        cout << n - min << "\n";
    }

    return 0;
}