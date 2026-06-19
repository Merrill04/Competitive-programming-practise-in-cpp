#include<iostream>
using namespace std;

int main(){

    int a = 2;
    int b = 2;

    //Arithmetic operators: used to compute 
    cout << a+b << "\n";// 4
    cout << a-b << "\n";// 0
    cout << a*b << "\n";// 4
    cout << a/b << "\n";// 1
    cout << a++ << "\n";// 2 here it is a++ so first a is printed and the 1 is added so now after printing a becomes 3.
    cout << a-- << "\n";// 3 now a is 3 from above step so hence it is printed then 1 is subtracted and now a is 2 again.
    cout << ++a << "\n";// 3 here its ++a so first 1 is added so a becomes 3 and then printed.
    cout << --a << "\n";// 2 here a is subtracted by 1 and then it becomes 2 and then printed.

    //Assignment operators: used to allocate a value.
    a = 4; 

    //comparison operators: return bool value.
    cout << (a == b);
    cout << (a != b);
    cout << (a >= b);
    cout << (a <= b);
    cout << (a < b);
    cout << (a > b);

    //logical operators: return bool value.
    cout << (a == b) && (a > b);// both true then true else false
    cout << (a == b) || (a > b);// both false then false else true

    return 0;
}