#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            mp[x]++;
        }
        if(mp.size() >= 3) 
            cout << "No" << endl;
        else
        {
            if(abs(mp.begin()->second - mp.rbegin()->second) <= 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1890/A