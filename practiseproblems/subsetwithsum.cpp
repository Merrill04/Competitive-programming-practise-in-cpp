#include<bits/stdc++.h>
using namespace std;

//The below 3 functions represent 3 recursion patterns.

//Time is O(2^n * n)
int countsubsets(int i, int array[], int k, int n, vector<int> set){
    if(i == n){
        int sum = 0;
        for(int i = 0; i < set.size(); i++){
            sum += set[i];
        }

        if(k == sum){
            return 1;
        }else{
            return 0;
        }
    }

    set.push_back(array[i]);
    int left = countsubsets(i+1, array, k, n, set);
    set.pop_back();
    int right = countsubsets(i+1, array, k, n, set);

    return left + right;
}

//The function to print all subsets with sum k. Time is O(2^n * n)
void generatesubsets(int i, int array[], int k, int n, vector<vector<int>>& v, vector<int> set){
    if(i == n){
        int sum = 0;
        for(int i = 0; i < set.size(); i++){
            sum += set[i];
        }

        if(k == sum){
            v.push_back(set);
        }

        return;
    }

    set.push_back(array[i]);
    generatesubsets(i+1, array, k, n, v, set);
    set.pop_back();
    generatesubsets(i+1, array, k, n, v, set);
}

//Print anyone subset. It can be any.
bool generateone(int i, int sum, int array[], int k, int n, vector<int> set){
    if(i == n){
        if(sum == k){
            for(int i = 0; i < set.size(); i++){
                cout << set[i] << " ";
            }

            return true;
        }

        return false;
    }

    set.push_back(array[i]);
    if(generateone(i+1, sum + array[i], array, k, n, set)){
        return true;
    }

    set.pop_back();
    if(generateone(i+1, sum, array, k, n, set)){
        return true;
    }

    return false;
}

int main(){
    int array[] = {1, 2, 3, 4};
    int k = 5;
    int n = sizeof(array)/sizeof(array[0]);
    vector<vector<int>> v;
    vector<int> set;
    
    generatesubsets(0, array, k, n, v, set);

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    bool found = generateone(0, 0, array, k, n, set);
    if(!found){
        cout << "No subset found!" << endl;
    }

    cout << endl;

    int ans = countsubsets(0, array, k, n, set);
    cout << ans << endl;
    
    return 0;
}