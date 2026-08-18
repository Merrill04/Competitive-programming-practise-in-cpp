#include<bits/stdc++.h>
using namespace std;

void generatesubsets(int idx, int array[], int n, vector<vector<int>>& v, vector<int> set){
    if(idx == n){
        v.push_back(set);
        return;
    }

    set.push_back(array[idx]);
    generatesubsets(idx + 1, array, n, v, set);
    set.pop_back();
    generatesubsets(idx + 1, array, n, v, set);
}

int main(){
    int array[] = {1, 2, 3};
    int n = sizeof(array)/sizeof(array[0]);
    vector<vector<int>> subsets;
    int idx = 0;
    vector<int> set;

    generatesubsets(idx, array, n, subsets, set);

    for(int i = 0; i < subsets.size(); i++){
        for(int j = 0; j < subsets[i].size(); j++){
            cout << subsets[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}