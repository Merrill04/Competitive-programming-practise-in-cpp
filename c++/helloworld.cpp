//The below is the standard c++ program structure template.
#include<iostream>// The #include<> is used to import a file that contains the functions we want to use. Here we have imported 
//iostream which contains the input/output and other functions. Without this we cant write cout function which is written below.

//Header files are of 2 types: system header files and user defined header files.
//system header files are loaded like this #include<iostream>
//user header files are loaded like this #include "nameoffile.h"
//The file path must be written properly in order to import it. 

int main(){//This is the entry point called as main function.

    std::cout << "Hello World!" << std::endl;//std means standard divspace. We can avoid writing std by writing "using namespace std;" below 
//header file.

    return 0;//Indicates successful termination.
}
//C++ is a low level language meaning close to hardware. Like we get control over memory with help of pointers.
//<< is insertion operater & >> is extraction operater.

//Things to note:
//To go to the next line we can use endl or \n. The \n is faster than endl because endl has a flush buffer.
//flush() forces the output buffer to be written immediately, which is expensive if done repeatedly.

//scanf and printf are faster than cin and cout. 
//But with the below two lines at the top inside the main function:
//ios::sync_with_stdio(false);
//cin.tie(nullptr);
//The cin and cout perform equivalent or faster than the scanf and printf.
