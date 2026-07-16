#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student{
    int noOfStudents;
    int counter;

    vector<int> StudentId;
    vector<string> StudentName;
    vector<int> StudentMarks;

    public:
        Student(int n): noOfStudents(n), counter(0), StudentId(n), StudentName(n), StudentMarks(n){}

        void fillstudentdata();
        void displaystudentdata();
};

void Student :: fillstudentdata(){
    if (counter >= noOfStudents) {
        cout << "Student limit reached.\n";
        return;
    }

    cout << "Enter Student ID: ";
    cin >> StudentId[counter];
    cout << "Enter Student Name: ";
    cin >> StudentName[counter];
    cout << "Enter Student Marks: ";
    cin >> StudentMarks[counter];
    counter++;
}

void Student :: displaystudentdata(){
    for(int i = 0; i < counter; i++){
        cout << "Student ID: " << StudentId[i] << ", Name: " << StudentName[i] << ", Marks: " << StudentMarks[i];
        cout << "\n";
    }
}

int main(){
    Student s(100);
    
    for(int i = 0; i < 3; i++){
        s.fillstudentdata();
    }

    s.displaystudentdata();

    return 0;
}