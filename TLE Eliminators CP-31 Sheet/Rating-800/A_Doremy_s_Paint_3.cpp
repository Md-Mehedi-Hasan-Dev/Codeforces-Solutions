#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int n, odd = 0, even = 0; cin >> n;
        vector<int> v(n);
        for(int &i : v)
        {
            cin >> i;
            if(i & 1 == 1) odd++;
            else even++;
        }
        if(odd == 0 || (odd % 2 == 0 && odd / 2 == even) || odd == even || even == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1890/A