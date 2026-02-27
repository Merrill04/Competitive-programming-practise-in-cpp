/*Remove a given character from a string and return the string using recursion.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
//The below method uses a result string passed by reference
void filterstring(string s, char a, string& ans, int start){
    if(start == s.length()){
        return;
    }

    if(s[start] != a){
        ans += s[start];
    }

    filterstring(s, a, ans, start+1);
}
*/
/*
//This method creates a string and modifies it.
string filterstring(string s, char a, int start, string ans = ""){
    if(start == s.length()){
        return ans;
    }

    if(s[start] != a){
        ans += s[start];
    }

    return filterstring(s, a, start+1, ans);
}
*/

// This method is for filtering string from a given string using recursion.
void filterstring(string s, string f, string &ans, int start)
{
    if (start >= s.length())
    {
        return;
    }

    if(start + f.length() <= s.length() && s.substr(start, f.length()) == f){
        filterstring(s, f, ans, start + f.length());
    }else{
        ans += s[start];
        filterstring(s, f, ans, start + 1);
    }  
}

int main()
{
    string s = "abcdeffsggh";
    string filter = "ffs";

    string result = "";

    filterstring(s, filter, result, 0);

    cout << result;

    return 0;
}