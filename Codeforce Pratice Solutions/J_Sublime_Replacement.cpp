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
    ll n; cin >> n;
    vll v(n);
    ip(v);
    for(ll &i : v)
        if(i == -1)
            i = 1e9;
    
    int max_len = 1, curr_len = 1, start_index = 0, max_sum = v[0], curr_sum = v[0];

    for(int i = 1; i < n; i++) {
        if(v[i] >= v[i - 1])
        {
            curr_sum += v[i];
            curr_len++;
        }
        else
        {
            curr_len = 1;
            curr_sum = v[i];
        }

        if(curr_len > max_len || (curr_len == max_len && curr_sum > max_sum))
        {
            max_len = curr_len;
            max_sum = curr_sum;
            start_index = i - max_len + 1;
        }
    }
    cout << max_sum << nl;
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// https://codeforces.com/gym/105973/problem/J