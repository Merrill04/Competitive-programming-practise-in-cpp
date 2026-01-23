#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, string> p;

    //p = make_pair(1, "Merr");
    p = {1, "Merr"};

    cout<< "The 1st value in pair is " << p.first << endl;
    cout<< "The 2nd value in pair is " << p.second << endl;   

    //If we want to create a array of pairs:

    pair<int, string> p_arr[3];

    p_arr[0] = {1, "merr"};
    p_arr[1] = {2, "swen"};
    p_arr[2] = {3, "ross"};

    for(int i = 0; i < 3; i++){
        cout<< p_arr[i].first << ": " << p_arr[i].second << "\n";
    }
}
