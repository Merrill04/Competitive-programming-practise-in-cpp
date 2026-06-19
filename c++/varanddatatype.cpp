//Variable is nothing but a container to hold our data with a name. Example int a = 3 and int arr[] = {1,2}, Here a and arr are 
//the variables. 
//Datatype is the type of data inside a variable like int, float, long, etc. 
//Varaibles can be local and global.
//The local variable are like created in a function body and accessible within a function itself.
//The global variables are declared outside a function body (inside a class) and are accessible within a program file. 
//Datatypes are: user-defined, built-in, derived.
//Built-In:      int, float, double, char, bool, long, short, long long
//Size in bytes:  4     4      8       1    1      4     2        8
//can be determined by sizeof() function.
// int range : +-2 * 10^9 , long long range: +-9 * 10^18, double range: upto 14 or 15 decimals.
//user-defined: struct, union, enum
//derived: pointers, arrays, function
#include<iostream>
using namespace std;

int global = 2;

void func(){
    cout << global;
}

int main(){
    
    int global = 1;//We can give same names to global and local variable.

    int a = 1;
    float f = 3.144;
    double d = 3.32134434432;
    char c = 'c';// If we write char c = 'cd' then it will print d. There is only 1 character in char.
    bool t = true;

    cout << global;// This will print 1 as the priority (precedence) is given to the local variable.

    func();//This will print 2. 
    //What happens is func is another function and know nothing about main function. So in func there is no local variable called
    //as global so then it refers to the global variable only.

    return 0;
}