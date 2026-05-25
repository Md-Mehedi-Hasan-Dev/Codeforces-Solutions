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
        vector<int> v(n);
        for(int &i : v)
            cin >> i;
        cout << ((v[0] == 1) ? "YES" : "NO") << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1896/A