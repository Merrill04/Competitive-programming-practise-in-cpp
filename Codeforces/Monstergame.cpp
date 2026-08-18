#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long result(long n, vector<long long> &swordarr, vector<long long> &levelarr)
{
    sort(swordarr.begin(), swordarr.end());
    long long maxans = 0;
    for(int i = 0; i < n; i++){
        long long swords = n-i;
        long long difficulty = swordarr[i];
        long long levelcleared = 0;

        int j = 0;
        while(j < n){
            swords -= levelarr[j];
            if(swords < 0){
                break;
            }else{
                levelcleared += 1;
                j++;
            }
        }

        if(maxans < levelcleared * difficulty){
            maxans = levelcleared * difficulty;
        }
    }

    return maxans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long n;
        cin >> n;

        vector<long long> swords;
        vector<long long> levels;

        for (int i = 0; i < n; i++)
        {
            long a;
            cin >> a;
            swords.push_back(a);
        }

        for (int i = 0; i < n; i++)
        {
            long b;
            cin >> b;
            levels.push_back(b);
        }

        cout << result(n, swords, levels) << "\n";
    }

    return 0;
}