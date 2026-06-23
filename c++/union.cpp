#include<iostream>
using namespace std;
//using struct we can create our custom data type.
/*
struct student{
    int id;
    string name;
};
*/
//Another and convinient way of declaring it is:
typedef struct student{
    int id;
    string name;
}st;
//Here when we declare struct for each student it allocates a memory of int+string bytes.

//Union is almost similar to struct but what is does is it allocates a memory which is maximum from the variables defined in it.
//Like below there is int 4 bytes, int 4 bytes and bool 1 byte so it allocates a memory of max(4, 4, 1) which is 4.
//So now when we use a union at a time we can use only one variable. If another is declared then it overwrites the value of 
//previous one.
union option{
    int data1;
    int data2;
    bool a;
};

int main(){
    //The enum we use it when we want to give users options. At a time user can select only 1 option.
    enum rating { good , verygood , best };
    st aman;
    aman.id = 1;
    aman.name = "Aman";

    option a;
    a.a = true;
    cout << a.a << endl;
    a.data1 = 2;//overwrites the previous value
    cout << a.data1 << endl;
 
    rating r = good;
    cout << r << endl;
    r = verygood;//overwrites the previously value
    cout << r << endl;

    return 0;
}