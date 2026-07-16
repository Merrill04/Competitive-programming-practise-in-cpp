#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int d){
            data1 = d;
        }

        void getdata1(){
            cout << data1 << endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int d){
            data2 = d;
        }

        void getdata2(){
            cout << data2 << endl;
        }
};

class derived : public Base1, public Base2{
    int data3;
    public:
        derived(int a, int b, int c) :  Base1(a) , Base2(b){// This is the sytax for initializing using a constructor from
        //derived class. So instead of calling constructor of each class and initializing individually we use this.
            data3 = c;
        }

        void getdata3(){
            cout << data3 << endl;
        }
};

int main(){
    derived d(1, 2, 3);
    d.getdata1();
    d.getdata2();
    d.getdata3();
}

