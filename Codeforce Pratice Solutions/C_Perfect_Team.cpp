#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;

int main()
{
    Md_Mehedi_Hasan;

    int q; cin >> q;
    while(q--)
    {
        ll c, m, x; cin >> c >> m >> x;
        cout << min({c, m, (c + m + x) / 3}) << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1221/C