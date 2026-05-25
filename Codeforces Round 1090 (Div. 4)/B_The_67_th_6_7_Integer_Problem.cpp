#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        vector<int> v(7);
        for(int &i : v) cin >> i;
        sort(v.begin(), v.end());
        for(int i = 0; i < 6; i++)
            v[i] *= -1;
        cout << accumulate(v.begin(), v.end(), 0) << endl;
    }

    return 0;
}

// https://codeforces.com/contest/2218/problem/B