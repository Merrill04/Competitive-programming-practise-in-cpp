#include<iostream>
using namespace std;
/*
class employee{
    string name;
    public: 
        int id;
        string dept;
        float salary;

        employee(int id, string dept, float salary){
            id = id;
            dept = dept;
            salary = salary;
        }
        employee(){}// This is necessary as when we create a derived class, automatically this gets called and if not specified
        // will give error.
};

// Syntax for inheriting: class derived-class-name : access-specifies(private/ public if not give default private) base-class-name
//Note:
//1. Default is private visibility mode.
//2. In private visibility mode public members of base class become private members of derived class.
//3. In public visibility mode public members of base class are public members in derived class.
//4. The private members of a base class are never inherited.
class programmer : employee{
    public:
        string language;
        programmer(string lang){
            language = lang;
        }
};

int main(){

    employee merrill(104, "IT", 1000.10f);
    programmer p("c++");
    // p.dept = "IT"; This wont work as we have inherited employee with no access specifier so the members of the employee
    // class in programmer will be private by default.
    // If we write class programmer : public employee then the above statement is valid.


    return 0;
}
*/

#include<iostream>
using namespace std;

class base{
    int data1;
    public:
        int data2;
        void setdata(){
            data1 = 10;
            data2 = 20;
        }

        int getdata1(){
            return data1;
        }

        int getdata2(){
            return data2;
        }
};

class derived : public base{
    int data3;
    public:
        void process(){
            data3 = data2 * getdata1(); //Here if we notice that data1 is private and not inherited but we have a getdata1() public
            //method that return data1 hence this works.
        }

        void print(){
            cout << data3;
        }
};

int main(){
    derived d;
    d.setdata();
    d.process();
    d.print();

    return 0;
}