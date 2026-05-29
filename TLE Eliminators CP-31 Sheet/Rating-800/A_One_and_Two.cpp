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
    int n, i, j, left = 0, total = 0; cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] == 2) total++;
    }
    if(total & 1)
    {
        cout << -1 << nl;
        return;
    }
    if(total == 0)
    {
        cout << 1 << nl;
        return;
    }
    for(int i = 0; i < n; i++)
    {
        if(v[i] == 2) left++;
        if(left == (total / 2))
        {
            cout << i + 1 << nl;
            break;
        }
    }
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// https://codeforces.com/problemset/problem/1788/A