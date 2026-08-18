#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int x1;
    int x2;
    int x3;

    cin >> x1 >> x2 >> x3;

    if((x1 >= x2 && x1 >= x3) && (x2 >= x3)){
        cout << (x1 - x2) + (x2 - x3);
    }else if((x1 >= x2 && x1 >= x3) && (x3 >= x2)){
        cout << (x1 - x3) + (x3 - x2);
    }else if((x2 >= x1 && x2 >= x3) && (x1 >= x3)){
        cout << (x2 - x1) + (x1 - x3);
    }else if((x2 >= x1 && x2 >= x3) && (x3 >= x1)){
        cout << (x2 - x3) + (x3 - x1);
    }else if((x3 >= x1 && x3 >= x2) && (x1 >= x2)){
        cout << (x3 - x1) + (x1 - x2);
    }else{
        cout << (x3 - x2) + (x2 - x1);
    }

    return 0;
}