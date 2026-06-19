#include<iostream>
using namespace std;

int main(){
    float f = 34.4f;//why write f at end? in cpp if a number has decimal points then even though it doesnt have that many 
    //floating points its still considered double. hence we write f to specify it. Here while declaring if we dont write it still
    //works but while passing it functions or using else where that f must be specified otherwise datatype mismatch can happen.

    long double l = 233.44l;//here if l is not mentioned at end and when we hover we see its default double. 
    long long lo = 423435334643ll;//same here if we do not mention l at end and hover its reffered as int.

    cout << f << "\n";
    cout << lo << "\n";

    //Rference variable:
    int a = 2;//This is a variable or container created in memory.
    int &b = a;// the b is not having any value its a reference variable to a's memory location. So b is pointing to a's 
    //memory location. This is called reference. b is a reference variable for a.

    cout << b << "\n";

    //Typecasting:

    float x = 12.45;
    int y = (int) x;
    cout << y;// prints 12

    //Constants:
    const int m = 3;
    //m += 1; This will give error because m will be read only that is cannot be modified.
}
