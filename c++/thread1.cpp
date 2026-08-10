/*
In every application there is thread called the main thread.
A thread is a lightweight process. The idea is to achieve parallelism using threads by utilising multiple threads to execute tasks
parallely. 
eg:-
(1) Browser has multiple tabs running which can be termed as many threads are running.
(2) MS word also uses many threads that is to format input, then to check spellings, etc.
(3) VS Code also runs threads that is we get recommendations while we type so that is also a thread running parallely with the 
thread thats taking input.

Ways to create a thread in cpp:-
(1) Function pointers
(2) Lambda functions
(3) Functors
(4) Member functions
(5) Static member functions

**A note to remember that when we create multiple threads in our program its not guaranteed which will start first. 

*/ 

#include<bits/stdc++.h>
#include<thread>
#include<chrono>
using namespace std;
using namespace std::chrono;

typedef long long ll;
ll odd = 0;
ll even = 0;

void oddsum(ll start, ll end){
    for(ll i = start; i <= end; i+=2){
        odd += i;
    }
}

void evensum(ll start, ll end){
    for(ll i = start + 1; i <= end; i+=2){
        even += i;
    }
}

int main(){
/*
//This is without multithreading that is taking a lot of time as first the main thread computs oddsum then it goes over to evensum.
    ll start = 0;
    ll end = 190000000;

    auto startTime = high_resolution_clock::now();

    oddsum(start, end);
    evensum(start, end);

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout << odd << "\n" << even;
    cout << "sec: " << duration.count()/10000 << "\n";
*/

// In the below code the two threads are created and they work simultaneously reducing the time to half.
    ll start = 0;
    ll end = 190000000;

    auto startTime = high_resolution_clock::now();

    thread t1(oddsum, start, end); // Function pointers method to create this threads.
    thread t2(evensum, start, end);

    t1.join();
    t2.join();

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout << odd << "\n" << even;
    cout << "sec: " << duration.count()/10000 << "\n";

    return 0;
}