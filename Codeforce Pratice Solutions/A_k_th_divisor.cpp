// - Md. Mehedi Hasan

#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define nl '\n'
#define sp " "
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<long long>
#define ip(x) for (auto &it : x) cin >> it
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)a.size()
using ll = long long;
using ull = unsigned long long;

void solve()
{
    ll n, k; cin >> n >> k;
    vector<ll> v;
    for(ll i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            v.pb(i);
            if(i != n / i)
                v.pb(n / i);
        }
    }
    sort(all(v));
    if(k > sz(v))
        cout << - 1;
    else
        cout << v[k - 1];
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://codeforces.com/contest/762/problem/A