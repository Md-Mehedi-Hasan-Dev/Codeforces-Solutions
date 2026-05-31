// - Md. Mehedi Hasan

#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<long long>
#define ip(x) for (auto &it : x) cin >> it
#define all(x) x.begin(), x.end()
using ll = long long;
using ull = unsigned long long;

void solve()
{
    ll a, b, xk, yk, xq, yq, ans = 0; cin >> a >> b >> xk >> yk >> xq >> yq;
    vector<pair<ll, ll>> moves = {
        {a, b},
        {a, -b},
        {-a, b},
        {-a, -b},
        {b, a},
        {b, -a},
        {-b, a},
        {-b, -a},
    };
    set<pair<ll, ll>> stk, stq;
    for(auto [dx, dy] : moves)
    {
        stk.insert({xk + dx, yk + dy});
        stq.insert({xq + dx, yq + dy});
    }
    for(auto pos : stk)
        if(stq.count(pos))
            ans++;
    cout << ans << nl;
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// https://codeforces.com/problemset/problem/1904/A