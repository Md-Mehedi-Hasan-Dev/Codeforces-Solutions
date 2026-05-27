#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define vi vector<int>
#define ip(x) for (auto &it : x) cin >> it
#define all(x) x.begin(), x.end()
using ll = long long;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        ll n, ans = LLONG_MAX; cin >> n;
        vector<ll> v(n);
        ip(v);
        if(!is_sorted(all(v)))
            cout << 0 << nl;
        else
        {
            for(int i = 0; i < n - 1; i++)
                ans = min(ans, v[i + 1] - v[i]);
            cout << (ans  / 2) + 1 << nl;
        }
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1853/A