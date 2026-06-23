#include<iostream>
using namespace std;

//Function prototype 
//type name( args);
int sum(int, int);//int sum(int a, int b); is also valid and this is called function prototype.

int main(){
    int a = 1;
    int b = 2;

    int ans = sum(a, b);

    return 0;
}

int sum(int num1, int num2){
    return num1 + num2;
}