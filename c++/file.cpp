#include<iostream>
#include<fstream>
using namespace std;

int main(){
/*
    string s = "Hello world!";

    ofstream out("sample1.txt");
    out << s;

    ifstream in("sample2.txt");
    string s1;
//    in >> s1;//This reads a single word only Like if there is hello world then it will read hello only.
    getline(in, s1);//This reads the first line.

    string s2;
//    in >> s2;
    getline(in, s2);//This reads the second line.

    cout << s1 << endl;
    cout << s2;
*/

    ofstream hout("example.txt");
    string s;
    cin >> s;

    hout << s;
    hout.close();

    ifstream hin("example.txt");
    string s1;

    getline(hin, s1);
    cout << s1;
    
    return 0;
}