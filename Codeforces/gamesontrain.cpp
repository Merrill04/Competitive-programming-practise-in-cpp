#include<bits/stdc++.h>
using namespace std;

int calc(int n, vector<int> array){
    int max = 0;
    int min = 7;

    for(int i = 0; i < array.size(); i++){
        if(array[i] > max){
            max = array[i];
        }

        if(array[i] < min){
            min = array[i];
        }
    }

    return max + 1 - min;

}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> arr;

        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            arr.push_back(a);
        }

        int result = calc(n, arr);
        cout << result << "\n";
    }

    return 0;
}