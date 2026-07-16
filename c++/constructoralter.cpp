#include<iostream>
using namespace std;

class example{
    int a;
    int b;

    public:
        /*example(int i, int j){ This is a standard way we follow.But there is a alternative.
            a = i;
            b = j;
        }
        */

        //example(int i, int j) : a(i), b(j){}// this also initializes a and b. a = i and b = j
        //example(int i, int j) : a(i*2), b(j+3){}
        //example(int i, int j) : a(i+j), b(j+i){}
        //example(int i, int j) : a(i+j), b(a+i){}
        example(int i, int j) : b(j), a(i + b){}// This wont work as order of execution is a gets initialized first so 
        //when we do a + b at that time b has garbage value.

        void getdata(){
            cout << a << " " << b;
        }

};

int main(){

    example e(1, 2);
    e.getdata();

    return 0;
}