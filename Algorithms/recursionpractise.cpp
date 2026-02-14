#include<iostream>
#include<bits/stdc++.h>

using namespace std;
/* Print from 1 to n using recursion.
void printnaturalnos(int n, int count){
    if(count > n){
        return;
    }else{
        cout << count << "\n";
        return printnaturalnos(n, count+1);
    }
}
*/

/* Print from n to 1 using recursion.
void printnaturalrev(int n){
    if(n < 1){
        return;
    }else{
        cout << n << "\n";
        return printnaturalrev(n-1);
    }
}
*/

/* To print factorial of a number.
int factorial(int n){
    if(n < 2){
        return 1;
    }

    return n * factorial(n-1);
}
*/

/* To calculate sum of numbers within a given range.
int sumofnos(int start, int end){
    if(start == end){
        return end;
    }

    return start + sumofnos(start+1, end);
}
*/

/* To print the sum of digits of a given number.
int sumofdigits(long long n){
    if(n < 10){
        return n;
    }

    return n % 10 + sumofdigits(n / 10);
}
*/

/* This reverses a number.
int reversenum(long long n, long long reversed = 0){
    if(n == 0){
        return reversed;
    }

    return reversenum(n / 10, reversed * 10 + (n % 10));
}
*/

/* To check if number is palindrome.
string palindromestr(string s, int left , int right){
    if(left > right){
        return "YES";
    }

    if(s[left] != s[right]){
        return "NO";
    }else{
        return palindromestr(s, left + 1, right - 1);
    } 
}
*/

/* Counts the number of zeros in number.
int countzeros(string nums, int start, int length, int count = 0){
    if(start > length){
        return count;
    }

    if(nums[start] == '0'){
        count += 1;
    }

    return countzeros(nums, start+1, length, count);
}
*/
int main(){
//    int n;
//    cin >> n;

//    int count = 1;
//    printnaturalnos(n, count);

//    printnaturalrev(n);

//    cout << factorial(n);

//    cout << sumofnos(1,10);

//    long long n;
//    cin >> n;
//    cout << sumofdigits(n);

//    long long n;
//    cin >> n;
//    cout << reversenum(n);

    string num;
    cin >> num;
    int length = num.length() - 1;
//    cout << palindromestr(num, 0, length);

//    cout << countzeros(num, 0, length);

    return 0;
}