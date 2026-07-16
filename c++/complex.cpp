#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
        void setdata(int num1, int num2);
        void getdata();
        void addcomplex(complex o1, complex o2);
        void subtractcomplex(complex o1, complex o2);
};

void complex :: setdata(int n, int m){
    a = n;
    b = m;
}

void complex :: getdata(){
    cout << a << " + i" << b << "\n";
}

void complex :: addcomplex(complex n, complex m){
    a = n.a + m.a;
    b = n.b + m.b;
}

void complex :: subtractcomplex(complex n, complex m){
    a = n.a - m.a;
    b = n.b - m.b;
}


int main(){

    complex o1, o2, o3;

    o1.setdata(3, 2);
    o1.getdata();

    o2.setdata(2, 1);
    o2.getdata();

    o2.addcomplex(o1, o2);
    o2.getdata();

    o3.subtractcomplex(o1, o2);
    o3.getdata();

    return 0;
}