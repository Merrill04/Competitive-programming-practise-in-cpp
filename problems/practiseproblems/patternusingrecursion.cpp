#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
void printpattern1(int length, int row = 0, int column = 0){
    if(row == length - 1){
        cout << "*";
        return;
    }

    if(row + column == length){
        cout << "\n";
        return printpattern1(length, row + 1, 0);
    }else{
        cout << "* ";
        return printpattern1(length, row, column+1);
    }
}
*/

void printpattern2(int length, int row = 0, int column = 0){
    if(row == length){
        return;
    }

    if(row == column){
        cout << "* " << "\n";
        return printpattern2(length, row + 1, 0);
    }else{
        cout << "* ";
        return printpattern2(length, row, column+1);
    }
}

int main(){
    int length;

    cin >> length;

//    printpattern1(length);
    printpattern2(length);

    return 0;
}

/*
This is the pattern1.

* * * * *
* * * *
* * *
* *
*

This is pattern2.

*
* *
* * *
* * * *
* * * * *

*/