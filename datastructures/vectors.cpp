#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Vector works like Queue(LIFO Principal).
int main(){
    vector<int> v;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);//method to add in vector.
    }

    cout << " \n";

    for(int i = n-1; i >= 0; i--){
        cout << v[i] << " ";
        v.pop_back();//After printing pops back the elements. 
    }

    cout << " \n";
    cout << v.size();

    vector<int> vec(5, 0);//Declares a vector of size 5 and initializes all locations with 0.

    cout << vec[0] << vec[4];

    vector<int> vec1 = vec;//Copies the vector in newly created vector.This is O(n) timecomplexity function.
}