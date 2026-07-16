#include<iostream>
using namespace std;

// Constructor is a special member function that does the work of initializing the members of a class (public/private).
// It has same name as class name. 
// If we do not define any constructor then the compiler runs a default constructor that initializes the values with garbage value.
// The constructor as the name says constructs a class for making it usable via objects. Hence without constructor we cannot 
// use a class. Hence even though we do not define constructor the compiler runs a default constructor of a class that makes it
// usable.

class complex{
    int a;
    int b;

    public:
        complex(){// This is a default constructor.
            a = 0; //We can either do this or keep the body empty then it will give some garbage values.
            b = 0;// The a=0 and b=0 are also called default arguments.
        }

        complex(int i, int j){// This is a Parameterized constructor
            a = i;
            b = j;
        }

        complex(float i, float j){// This constructor is for dynamic initialization of objects. 
        //Like if suppose we are taking value from user so during runtime user may enter a int values 2 or 3 or maybe float values
        //0.02 and 0.03. So depending on the type of value the constructor is called and it initializes the objects.
            a = (int) (i * 100);
            b = (int) (j * 100);
        }

        //IMP: even if we dont write copy constructor in c++ the compiler has its own copy constructor for each class.
        // So in cpp the compiler provides default and copy constructor even if we do not specify it.
        complex(complex &object){//This is a copy constructor. It takes a reference of the same class object and assigns a value
            // same as the reference of the given object.
            a = object.a;
            b = object.b;
        }

        ~complex(){// Destructor, compiler anyways calls it by default so no need here.

        }

        void display(){
            cout << a << "+ i" << b << "\n";
        }

        friend void subtractcomplex(complex c, complex d);
};

void subtractcomplex(complex o1, complex o2){
    cout << o1.a - o2.a << "+ i" << o1.b - o2.b << "\n";
}

int main(){
/*   
    complex o1(1, 2);
    complex o2(2, 3);
    complex o3 = complex(4, 5);//This is also a way to declare object using constructor.
    
    float x, y;

    o1.display();
    o2.display();
    o3.display();

    subtractcomplex(o2, o1);
    subtractcomplex(o3, o2);
*/ 
    float x, y;
    cin >> x >> y;

    complex o4(x, y);

    o4.display();

    complex o5(o4);
    o5.display();

    complex o6 = o4;// Even this is valid. Here the copy constructor will be invoked.

    //complex o7;
    //o7 = o4;// This wont work as o7 is already created in the above line and the complier works line by line so this wont work


    return 0;
}

/*
Properties of a constructor:
1. It must be declared in public section of a class.
2. It is automatically invoked when an object is created.
3. It doesnt have return types.
4. A class can have many constructors and while object creation its decided which constructor is called.
*/

// There is also a destructor whose work is to destroy or unallocate the dynamically allocated memory by the constructor.
//The destrocter does not take any value and return any value and it is run by compiler everytime.