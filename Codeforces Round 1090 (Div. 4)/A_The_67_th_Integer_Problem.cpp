#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int x; cin >> x;
        if(x > -67 && x < 67)
            cout << x + 1 << endl;
        else
            cout << x << endl;
    }

    return 0;
}

// https://codeforces.com/contest/2218/problem/0