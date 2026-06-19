// Upper Bound: index of 1st number that is greater than the target number. 
//Eg is array [ 1 2 2 3 4 5] for 2 the upper bound index is 3 as 3 > 2 at index 3.
#include<bits/stdc++.h>
using namespace std;

int upperbound(vector<int> arr, int n, int num){
    int left = 0;
    int right = n;
    int index = n;

    if(num < arr[0]){
        return 0;
    }

    while(left <= right){
        int mid = left + ((right - left) / 2);

        if(arr[mid] > num){
            index = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }

    return index;
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
    cout << upperbound(v, size, target);
}