#include<bits/stdc++.h>
using namespace std;

int getmin(int n, int k, vector<int> v){
    int min = INT_MAX;

    if(k != 4){
        bool f = false;
        for(int i = 0; i < n; i++){
            if(v[i] % k == 0){
                f = true;
            }
        }

        if(f == true){
            min = 0;
            return min;
        }else{
            for(int i = 0; i < n; i++){
                int t = 0;
                int a = v[i];

                while(a % k != 0){
                    a++;
                    t++;
                }

                if(min > t){
                    min = t;
                }
            }
        }
    }else{
        int even = 0;
        for(int i = 0; i < n; i++){
            if(v[i] % 2 == 0){
                even++;
            }
        }

        if(even > 1){
            min = 0;
            return min;
        }else{
            if(even == 0){
                for(int i = 0; i < n; i++){
                    v[i] += 1;
                }

                bool flag = false;

                for(int i = 0; i < n; i++){
                    if(v[i] % 4 == 0){
                        flag = true;
                        break;
                    }
                }

                if(flag == true){
                    min = 1;
                }else{
                    min = 2;
                }
            }else if(even == 1){
                int t = -1;

                for(int i = 0; i < n; i++){
                    if(v[i] % 2 == 0){
                        t = v[i];
                        break;
                    }
                }

                if(t % 4 == 0){
                    min = 0;
                }else{
                    min = 1;
                }
            }
        }
    }

    return min;
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;

        vector<int> v;
        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            v.push_back(a);
        }

        cout << getmin(n, k, v) << "\n";
    }

    return 0;
}
