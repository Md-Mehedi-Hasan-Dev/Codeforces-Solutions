#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int n, cnt = 0; cin >> n;
        vector<int> v(n);
        for(int &i : v)
        {
            cin >> i;
            if(i % 2 != 0) cnt++;
        }
        (cnt % 2 == 0) ? cout <<  "YES\n" : cout << "NO\n";
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1857/A