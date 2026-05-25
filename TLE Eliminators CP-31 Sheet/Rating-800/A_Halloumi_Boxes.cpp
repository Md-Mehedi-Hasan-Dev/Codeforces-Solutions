#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;

int main()
{
    Md_Mehedi_Hasan;

    int t, n, k; cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<ll> v(n);
        for(ll &i : v)
            cin >> i;
        if(is_sorted(v.begin(), v.end()) || k > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1903/A