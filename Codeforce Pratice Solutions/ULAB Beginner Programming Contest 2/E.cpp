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
    int n, evenCnt = 0, oddCnt = 0; cin >> n;
    vi v(n);
    ip(v);
    for(int i = 0; i < n; i++)
    {
        if(i & 1 && v[i] % 2 == 0)
            oddCnt++;
        else if(i % 2 == 0 && v[i] & 1)
            evenCnt++;
    }
    cout << (evenCnt != oddCnt ? -1 : evenCnt) << nl;
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// https://vjudge.net/contest/837327#problem/E