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
    int n, a = 0, b = 0, c = 0, x, mx = INT_MIN; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(i % 3 == 0) a += x;
        else if(i % 3 == 1) b += x;
        else c += x;
    }
    mx = max({a, b, c});
    if(a == mx) cout << "chest";
    else if(b == mx) cout << "biceps";
    else cout << "back";
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://vjudge.net/contest/830978#problem/C