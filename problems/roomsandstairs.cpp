#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int travelledrooms(string &s, int len){

    if (s[0] == '0' && s[len-1] == '0'){
        int left = 1;
        int idx1 = 0;

        while(left < len){
            if(s[left] == '1'){
                idx1 = left;
                break;
            }else{
                left++;
            }
        }
        
        int right = len - 2;
        int idx2 = 0;
        while(right > 0){
            if(s[right] == '1'){
                idx2 = right+1;
                break;
            }else{
                right--;
            }
        }

        if(idx1 == 0 || idx2 == 0){
            return len;
        }

        int temp = len - idx2;
        if(len - idx1 > len - temp){
            return 2 * (len - idx1);
        }else if(len - idx1 <= len - temp){
            return 2 * (len - temp);
        }
    }else {
        return 2 * len;
    }
}

int main(){

    int t;
    cin >> t;

    vector<int> len;
    vector<string> str;

    for (int i = 0; i < t; i++){
        int length;
        cin >> length;

        len.push_back(length);

        string s;
        cin >> s;

        str.push_back(s);
    }

    for (int i = 0; i < t; i++){
        int result = travelledrooms(str[i], len[i]);
        cout << result << endl;
    }

    return 0;
}
