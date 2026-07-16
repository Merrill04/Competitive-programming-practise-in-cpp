#include<iostream>
using namespace std;

class Student{
    private:// What this does is keeps class members protected that is they cant be directly modified or accesed. 
            // Only class methods can access or modify them.
        int marks;
        string name;
        int id;
        int calcmarks(int m);// This is a private function. This can be used only by the method in the class and it cannot be 
        //called by classname.methodname.

    public: // These are accessible directly.
        int dateofexam;
        void setdata(int i, string n, int m);// Here the method is defined. The implementation is written outside class.
        void getdata(){// Here we have defined and written the implementation.
            cout << name << " : " << id << " marks obtained: " << marks << " " << dateofexam;
        };
};

int Student :: calcmarks(int m){// The private method body is written here.
    m = m * 10;
    return m;
}

void Student :: setdata(int i, string n, int m){// The syntax to write implementation of the class method outside it.
    marks = calcmarks(m);// The private method is called from here.
    id = i;
    name = n;
}

int main(){

    Student s;

    s.dateofexam = 17;// This is publically accessible hence we can set it directly. we can do s.marks or s.name or s.id as 
    //they are private.
    s.setdata(18, "Merrill", 9);// Hence we use a class method to do so.
    s.getdata();

    return 0;
}