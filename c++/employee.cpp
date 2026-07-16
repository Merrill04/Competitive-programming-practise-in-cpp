#include<iostream>
using namespace std;

class Employee{
//    int count = 0; What happened here is the count is non static and it is not shared between different objects.
//Hence even if there are 3 objects the count remains 1 for each object. To make it shared we declare it as static.
    static int count;// This is a static variable.
    int id;

    public: 
        void setdata(){
            cout << "Enter id: ";
            cin >> id;
            count++;
        }

        void getdata(){
            cout << "The id of the employee no. " << count << " is " << id << endl;
        }

        static void getcount(){//This is a static function. No need to create object for this can directly be called via classname.
            //cout << id;// The static function doesnt have access to non static members of a class. It can access only static members.
            cout << "The count till now is: " << count << endl;
        }
};

int Employee :: count;//Declaration of the static member must be done outside class also. And static member is by default 0.

int main(){
    Employee merrill, rion, shawn;

    merrill.setdata();
    merrill.getdata();
    Employee :: getcount();

    rion.setdata();
    rion.getdata();
    Employee :: getcount();

    shawn.setdata();
    shawn.getdata();
    Employee :: getcount();
    
    return 0;
}