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
        vector<int> v;
        int l = 1, r = 3 * n;
        for(int i = 0; i < n; i++)
        {
            v.push_back(l);
            v.push_back(r);
            v.push_back(r - 1);
            l++;
            r -= 2;
        }
        for(int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// https://codeforces.com/contest/2218/problem/C