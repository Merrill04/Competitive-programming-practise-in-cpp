/*Given a matrix of n,n rows and columns, find the number of ways we can reach from 0,0 to n,n position given that at each step
we can travel only to right or down.
So at every position we have a option to go right (row+1) or down (col+1).
So at each step there are two options so recursive tree will be consisting of left and right parts.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int stepstoreach(int r, int c, int n){
    if(r == n || c == n){
        return 1;
    }

    int right = stepstoreach(r+1, c, n);
    int down = stepstoreach(r, c+1, n);

    return right+down;
}

void printsteps(string p, int r, int c, int n){
    if(r == n && c == n){
        cout << p << "\n";
        return;
    }

    if(r < n){
        printsteps(p+"R", r+1, c, n);
    }

    if(c < n){
        printsteps(p+"D", r, c+1, n);
    }
}

int main(){
    cout << stepstoreach(1, 1, 3) << "\n";
    printsteps("", 1, 1, 3);
}