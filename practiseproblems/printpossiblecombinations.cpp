/*To print all the possible combinations from a given string using recursion.
Suppose a given string is "abc" then combinations are a, b, c, ab, bc, ac, abc.

So what this does is it takes two strings one processed and unprocessed(original input string).
In each iteration t has two choices. One is to take the 1st char from unprocessed string and 2nd is to ignore it. 
It does that and when the unprocessed becomes empty it has found one combination. That it adds to the result vector.

Recursive tree for this:                
                                                            abc
                                                            /\
                                                           /  \
                                                  p=a|up=bc    p=""|up=bc  here in one side it takes a and ignores a.
                                                     /\            |____________________
                                                    /  \                                |
                                           p=ab|up=c    p=a|up=c                        /\
                                               /\             \                        /  \   
                                              /  \             \               p=b|up=c    p=""|up=c
                                    p=abc|up=""   p=ab|up=""    \                 /\            |______
                                                                /\      p=bc|up=""  p=b|up=""          |
                                                               /  \                                    /\
                                                     p=ac|up=""    p=a|up=""                  p=c|up=""  p=""|up=""

So as viewed in the tree when the unprocessed(up) becomes empty we get one pattern and hence that is the base case.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*This function adds the processed string to the result string.
void explorepatterns(string processed, string unprocessed, vector<string>& result){
    if(unprocessed.length() == 0){
        result.push_back(processed);
        return;
    }

    char ch = unprocessed[0];
    explorepatterns(processed+ch, unprocessed.substr(1), result);
    explorepatterns(processed, unprocessed.substr(1), result);
}
*/

// This function returns a vector of the strings.
vector<string> explorepatterns(string processed, string unprocessed){
    if(unprocessed.length() == 0){
        vector<string> list;
        list.push_back(processed);
        return list;
    }

    char ch = unprocessed[0];
    vector<string> left = explorepatterns(processed+ch, unprocessed.substr(1));
    vector<string> right = explorepatterns(processed, unprocessed.substr(1));

    left.insert(left.end(), right.begin(), right.end());

    return left;
}

int main(){

    string processed = "";
    string unprocessed = "abcd";
    vector<string> ans = explorepatterns(processed, unprocessed);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << ", ";
    }

    return 0;
}