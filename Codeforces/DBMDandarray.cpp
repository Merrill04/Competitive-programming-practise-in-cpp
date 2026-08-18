#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string checksum(int n, int s, int x, vector<int>& nums)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }

    if (sum > s)
    {
        return "NO";
    }
    else if (sum == s)
    {
        return "YES";
    }
    else
    {

        while (sum < s)
        {
            sum += x;
        }

        if (sum == s)
        {
            return "YES";
        }
    }

    return "NO";
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        int x;
        int s;

        cin >> n >> s >> x;

        vector<int> array;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            array.push_back(a);
        }

        cout << checksum(n, s, x, array) << "\n";
    }

    return 0;
}