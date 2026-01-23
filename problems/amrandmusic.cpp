#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    int days;

    cin >> n >> days;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int arrref[n];
    copy(arr, arr + n, arrref);

    if(days < arr[0]){
        cout << 0;
        return 0;
    }

    sort(arr, arr + n);
    int count = 0;
    vector<int> v;

    while(days > 0){
        if(count >= n){
            break;
        }else if(days - arr[count] < 0){
            days -= arr[count];
        }else{
            v.push_back(arr[count]);
            days -= arr[count];
            count++;
        }
    }

    cout << count << endl;

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < n; j++){
            if(v[i] == arrref[j]){
                cout << j + 1 << " ";
                arrref[j] = -1;
                break;
            }
        }
    }

    return 0;
}