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
    int n, k, ans = 10, even_cnt = 0; cin >> n >> k;
    vi v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] % 2 == 0) even_cnt++;
        ans = min(ans, (k - v[i] % k) % k);
    }
    if(k == 4)
        ans = min(ans, max(0, 2 - even_cnt));
    cout << ans << nl;
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// https://codeforces.com/contest/1883/problem/C