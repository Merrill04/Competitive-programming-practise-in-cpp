//pointer is a datatype that holds the address of the other data types.
//& -- Represents address of a variable
//* -- Dereference pointer or value at operator
#include<iostream>
using namespace std;

int main(){

    int a = 0;
    int* b = &a;

    cout << b << endl;//prints address of a
    cout << &a << endl;//prints address of a
    cout << *b << endl;//prints value at which b is pointing
    cout << &b << endl;//This prints address of b

    //We can create pointer of a pointer. 
    int** c = &b;//This stores address of b pointer
    cout << c << endl;//prints address of b
    cout << *c << endl;//prints value at which address stored in c is pointing (here address of b is stored in c and b is pointing
    // to address of a so address of a is being printed.)
    cout << **c << endl;//prints value at address of b
    cout << &c <<endl;//prints address of c


    //Array and Pointer Arithmetics:
    //Array is a sequential storage datastructure here m n o p are pointing to addresses of each block in array that are stored 
    //sequentially.

    int array[4] = {1, 2, 3, 4};
    int* m = &array[0];
    int* n = &array[1];
    int* o = &array[2];
    int* p = &array[3];

    cout << m << endl;
    cout << n << endl;
    cout << o << endl;
    cout << p << endl;

    //Also if we take a pointer and initialize it with array name then thats valid because arrayname has the starting address of
    //the array.
    int* q = array;
    cout << q << endl;//This points  to the address of first block in array. Hence m and q values are equal.
    q++;// Now this will point to address of next block that is array[1]. 
    cout << q << endl;// This will print address of array[1]. q and n will have same value. It increments depending on size of 
    // variable store. Here int so increments by 4 bytes.
    cout << *(q + 1) << endl;// Now q was pointing to array[1] so here when we do *(q+1) it will print value at address of q+1
    //that is array[2] that is 3.

    return 0;
}