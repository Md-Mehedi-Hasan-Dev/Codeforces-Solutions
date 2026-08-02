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

struct job
{
    int t, s, idx;
};

void solve()
{
    int n; cin >> n;
    vector<job> jobs(n);
    for(int i = 0; i < n; i++)
    {
        cin >> jobs[i].t >> jobs[i].s;
        jobs[i].idx = i + 1;
    }
    sort(all(jobs), [](const job &a, const job &b) {
        ll l = 1LL * a.s * b.t, r = 1LL * b.s * a.t;
        if(l == r)
            return a.idx < b.idx;
        return l > r;
    });
    for(int i = 0; i < n; i++)
    {
        if(i) cout << sp;
        cout << jobs[i].idx;
    }
    cout << nl;
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        solve(); 
        if(t) cout << nl;
    }

    return 0;
}

// https://vjudge.net/contest/837327#problem/F