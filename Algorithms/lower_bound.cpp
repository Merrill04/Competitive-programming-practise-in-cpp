// Lower Bound: index of 1st number that is greater than or equal to the target number. 
//Eg is array [ 1 2 2 3 4 5] for 2 the lower bound index is 1 as 2 >= 2 at index 1.
#include<bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> arr, int n, int num){
    int left = 0;
    int right = n;
    int ans = n;

    if(num < arr[0]){
        return 0;
    }

    while(left <= right){
        int mid = left + ((right - left) / 2);

        if(arr[mid] >= num){
            ans = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }

    return ans;
}

int main(){
    int size;
    cin >> size;
    
    vector<int> v;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    int target;
    cin >> target;

    cout << lowerbound(v, size, target);
}