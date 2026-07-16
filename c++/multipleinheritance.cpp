#include<iostream>
using namespace std;

class Base1{
    protected:
        int b1;
    public:
        void setb1(int a){
            b1 = a;
        }
};

class Base2{
    protected:
        int b2;
    public:
        void setb2(int a){
            b2 = a;
        }
};

class derived : public Base1, public Base2{
    int b3;
    public:
        void setb3(){
            b3 = b1 + b2;
        }

        void getb3(){
            cout << b3;
        }
};

int main(){
    derived d;
    d.setb1(1);
    d.setb2(2);
    d.setb3();
    d.getb3();
}