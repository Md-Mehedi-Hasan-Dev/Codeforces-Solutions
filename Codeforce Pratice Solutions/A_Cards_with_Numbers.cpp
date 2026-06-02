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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    vector<vector<int>> v(5005);
    for(int i = 1; i <= 2 * n; i++)
    {
        int x; cin >> x;
        v[x].push_back(i);
    }
    for(int i = 1; i <= 5000; i++)
    {
        if(v[i].size() % 2)
        {
            cout << -1 << nl;
            return;
        }
    }
    for(auto x : v)
    {
        for(int i = 0; i < x.size(); i += 2)
        cout << x[i] << " " << x[i + 1] << nl;
    }
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://codeforces.com/problemset/problem/254/A