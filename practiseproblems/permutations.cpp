/*The question is to print possible combinations of all the chars present in string.
Eg for abc it will be 3! = 6 [abc, acb, bac, bca, cab, cba].

In this problem the recursion tree goes like:
                                                        abc
                                                         |
                                                        a/bc   --  initially empty so no choice so add a to processed.
                                                         /\
                                                        /  \
                                                    ab/c    ba/c   --  choices are _a or a_
                                                     /|\      |_____________
                                                    / | \                   |
                                                   /  |  \                  /|\
                                             cab/"" acb/"" abc/""          / | \
                                                                          /  |  \
                                                                    cba/"" bca/"" bac/""

Like visible in the tree we have a processed and unprocessed string.
We return when the unprocessed string is empty.
Here we can also see that recursion calls at each level are different. It depends on length of processed + 1.
We run for loop at each call for p.length+1 times and call the function recursively.

How do we make the string:-

at 1st recursive call: p = "", up = "abc", a = a then loop runs for 1 times(1 call), first = "", second = "",
then recursive call ("" + a + "", "bc")

at 2nd recursive call: p = "a", up = "bc", a = b then loop runs for 2 times(2 calls), first = "", second = "a",
then recursive call ("" + b + "a", "c")
for 2nd recursive call it will be ("a" + b + "", "c")

Similarly at 3rd level 3 recurive calls will be made on both sides.
*/                                                                      

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void permutationpattern(string p, string up){
    if(up.length() == 0){
        cout << p << "\n";
        return;
    }

    char a = up[0];

    for(int i = 0; i <= p.length(); i++){
        string first = p.substr(0,i);
        string second = p.substr(i,p.length());
        permutationpattern(first + a + second, up.substr(1));
    }
}

int main(){

    permutationpattern("", "abc");

    return 0;
}