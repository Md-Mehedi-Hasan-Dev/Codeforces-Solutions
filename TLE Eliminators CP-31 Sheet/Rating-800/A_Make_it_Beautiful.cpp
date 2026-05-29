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
    int n, sum = 0, flag; cin >> n;
    vi v(n);
    ip(v);
    int mx = *max_element(all(v)), mn = *min_element(all(v));
    if(mx != mn)
    {
        yes;
        cout << mx << " " << mn << " ";
        for(int i = 1; i < n - 1; i++) cout << v[i] << " ";
        cout << nl;
    }
    else no;
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// https://codeforces.com/problemset/problem/1783/A