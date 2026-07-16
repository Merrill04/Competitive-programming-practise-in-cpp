#include<iostream>
using namespace std;

class Student{
    protected:
        int rollno;
    public: 
        void set_rollno(int r){
            rollno = r;
        }

        void get_roll(){
            cout << rollno << endl;
        }
};

class exam: public Student{
    protected:
        int mathmarks;
        int physicsmarks;
    public:
        void set_marks(int m, int p){
            mathmarks = m;
            physicsmarks = p;
        }

        void get_marks(){
            cout << "Math marks " << mathmarks << " and physics marks " << physicsmarks << " of roll no. " << rollno << endl;
        }
};

class result : public exam{
    float result;
    public: 
        void get_result(){
            result = (mathmarks + physicsmarks) / 2;
            cout << result << endl;
        }
};

int main(){
    result r;
    r.set_rollno(104);
    r.get_roll();
    r.set_marks(80, 90);
    r.get_marks();
    r.get_result();
}