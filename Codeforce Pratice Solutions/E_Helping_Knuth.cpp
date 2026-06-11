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
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)a.size()
using ll = long long;
using ull = unsigned long long;

vector<bool> freq(200005, false);

void solve()
{
    int n; cin >> n;
    vi v(n);
    vi used(n + 1, 0);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] != -1)
            used[v[i]] = 1;
    }
    vi missing;
    for(int i = 1; i <= n; i++)
        if(!used[i])
            missing.pb(i);
    sort(rall(missing));
    int idx = 0;
    for(int i = 0; i < n; i++)
        if(v[i] == -1)
            v[i] = missing[idx++];
    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << nl; 
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// https://codeforces.com/gym/106522/problem/E