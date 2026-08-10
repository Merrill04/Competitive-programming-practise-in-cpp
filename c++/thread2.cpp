//Ways to create a thread.
#include<bits/stdc++.h>
#include<thread>
using namespace std;
/*
//(1) Function pointers
int x = 0;
void increment(int limit){
    while(x < limit){
        x++;
    }
}
int main(){

    thread t(increment, 10);
    t.join();

    cout << x;

    return 0;
}
*/

/*
//(2) Lambda functions
int x = 0;

//auto func = [] (int limit){// This is a lambda function.
//    while(x < limit){
//        x++;
//    }
//};

int main(){

//    thread t(func, 10);
//    t.join();
//There are 2 ways, one is like above create a seperate lambda function and pass in thread or else define lambda function in thread
//body itself like done below.
    thread t([](int limit){// This is a lambda function.
        while(x < limit){
            x++;
        }
    }, 10);

    t.join();

    cout << x;

    return 0;
}
*/

/*
//(3) Functors (Function object)
int x = 0;
class Base{
    public:
        void operator()(int lim) {//This is a operator function in class base that is being overloaded. 
        // If name is changed to some other name then it doesnt compile. The name of the function object must be operator only.
            while (x < lim) {
                x++;
            }
        }
};

int main(){

    thread t(Base(), 10);
    t.join();

    cout << x;

    return 0;
}
*/

/*
//(4) Member functions
int x = 0;

class Base{
    public:
        void incr(int lim) {
            while (x < lim) {
                x++;
            }
        }
};

int main(){

    Base b;

    thread t(&Base::incr, &b, 10);
    t.join();

    cout << x;

    return 0;
}
*/

//(5) Static member functions

int x = 0;

class Base{
    public:
        static void incr(int lim) {
            while (x < lim) {
                x++;
            }
        }
};

int main(){

    Base b;

    thread t(&Base::incr, 10);
    t.join();

    cout << x;

    return 0;
}
