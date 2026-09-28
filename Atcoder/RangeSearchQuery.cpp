#include<bits/stdc++.h>
using namespace std;

void check(int q, string s, string t, vector<vector<int>> queries){
    
    for(int i = 0; i < q; i++){
        if(queries[i][1] - queries[i][0] + 1 < t.length()){
            cout << "No" << "\n";
        }else{
            bool flag = false;

            for(int j = queries[i][0] - 1; j <= queries[i][1] - t.length(); j++){
                if(s.substr(j, t.length()) == t){
                    flag = true;
                    break;
                }
            }

            if(flag == true){
                cout << "Yes" << "\n";
            }else{
                cout << "No" << "\n";
            }
        }
    }
}

int main(){
    int q;
    cin >> q;

    string s, t;
    cin >> s >> t;

    vector<vector<int>> queries(q);

    for(int i = 0; i < q; i++){
        vector<int> v(2);
        int start, end;
        cin >> start >> end;

        v[0] = start;
        v[1] = end;

        queries[i] = v;
    }

    check(q, s, t, queries);

    return 0;
}