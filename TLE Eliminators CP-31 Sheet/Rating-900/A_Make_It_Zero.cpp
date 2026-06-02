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
    int n; cin >> n;
    vi v(n);
    ip(v);
    if(n & 1)
    {
        cout << 4 << nl;
        cout << "1 " << n - 1 << nl;
		cout << "1 " << n - 1 << nl;
		cout << n - 1 << ' ' << n << nl;
		cout << n - 1 << ' ' << n << nl;
    }
    else
    {
        cout << 2 << nl;
        cout << "1 " << n << '\n';
		cout << "1 " << n << '\n';
    }
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// https://codeforces.com/problemset/problem/1869/A