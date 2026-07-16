#include<iostream>
using namespace std;

class complex{
    int a;
    public:
        void setdata(int i){
            a = i;
        }

        void getdata(){
            cout << a << endl;
        }
};

int main(){
    complex c1;
    //complex *ptr = &c1;
    complex *ptr = new complex;

    ptr -> setdata(1);
    ptr -> getdata();

    delete ptr;
}