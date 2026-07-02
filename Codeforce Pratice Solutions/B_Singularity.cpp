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
    int n, L = -1, R = -1; cin >> n;
    vll v(n);
    ip(v);
    for(int i = 0; i < n; i++)
    {
        if(v[i] != 1)
        {
            L = i;
            break;
        }
    }
    if(L == -1)
    {
        cout << 0 << nl;
        return;
    }
    for(int i = n - 1; i >= 0; i--)
    {
        if(v[i] != 1)
        {
            R = i;
            break;
        }
    }
    bool ok = true;
    for(int i = L; i <= R; i++)
    {
        if(v[i] != v[L])
        {
            ok = false;
            break;
        }
    }
    cout << (ok ? 1 : 2) << nl;
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// https://codeforces.com/gym/106607/problem/B