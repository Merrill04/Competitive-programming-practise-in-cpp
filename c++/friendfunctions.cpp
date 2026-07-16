#include<iostream>
using namespace std;

class complex;// declare the complex class because calculator is uding the complex class object and we tell compiler that
//there is a complex class in the program ahead. This is called as forward declaration.

class calculator{//class calculator is declared here and its methods are defined here and implemented below.
    //We cannot implement this methods here because we have not yet designed our complex class. 
    //Like if we were to write the method here then we would require o1.a and o2.b and stuff but that is not defined yet.
    //Hence just declare the methods here and implement after complex class.
    public: 
        complex addcomplex(complex m, complex n);
        complex subtractcomplex(complex m, complex n);
};

class complex{
    int a;
    int b;

    public:
        void setdata(int num1, int num2);
        void getdata();
//      below we declare the functions belonging to a class or the program as friends.
//      friend complex addcomplex(complex o1, complex o2);// The function is declared friend so that it has access.
//      friend complex subtractcomplex(complex o1, complex o2);
//      friend complex calculator :: addcomplex(complex i, complex j);// These are the friend functions from a different class. 
//      friend complex calculator :: subtractcomplex(complex i, complex j);

//      Here we are declaring functions as friend individually. But what if we want to add more functions in calculator class 
//      that use complex. so instead of declaring each function as a friend we declare class calculator as a friend.
//      Then each function inside the calculator can access private data of complex class.
        friend class calculator;
};

void complex :: setdata(int n, int m){
    a = n;
    b = m;
}

void complex :: getdata(){
    cout << a << " + i" << b << "\n";
}
/*
complex addcomplex(complex m, complex n){
    complex ne;

    ne.setdata((m.a + n.a), (m.b + n.b));

    return ne;
}

complex subtractcomplex(complex m, complex n){
    complex ne;

    ne.setdata((m.a - n.a), (m.b - n.b));

    return ne;
}
*/

complex calculator :: addcomplex(complex m, complex n){
    complex ne;

    ne.setdata((m.a + n.a), (m.b + n.b));

    return ne;
}

complex calculator :: subtractcomplex(complex m, complex n){
    complex ne;

    ne.setdata((m.a - n.a), (m.b - n.b));

    return ne;
}

int main(){

    complex o1, o2;

    o1.setdata(3, 2);
    o1.getdata();

    o2.setdata(2, 1);
    o2.getdata();
/*
    complex o3 = addcomplex(o1, o2);
    complex o4 = subtractcomplex(o1, o2);
    o3.getdata();
    o4.getdata();
*/

    calculator calc;

    complex o3 = calc.addcomplex(o1, o2);
    complex o4 = calc.subtractcomplex(o1, o2);

    o3.getdata();
    o4.getdata();

    return 0;
}

/*Properties of friend functions:
1. They do not  come in the scope of the class. That is creating object of that class and then calling them doesnt work.
2. They do not need an object to be created for calling them. Just call them directly in main function.
3. They are used for accessing private members of the their friend class.
4. usually they have objects as arguments so that private data can be accessed.
5. can be written in public and private part of the class.
6. It can access members of class only using objects.
*/