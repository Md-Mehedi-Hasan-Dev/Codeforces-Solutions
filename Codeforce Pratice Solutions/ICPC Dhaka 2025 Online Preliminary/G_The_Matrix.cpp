/*
 *  IN THE NAME OF ALMIGHTY ALLAH
 *
 *  ███╗   ███╗███████╗██╗  ██╗███████╗██████╗ ██╗
 *  ████╗ ████║██╔════╝██║  ██║██╔════╝██╔══██╗██║
 *  ██╔████╔██║█████╗  ███████║█████╗  ██║  ██║██║
 *  ██║╚██╔╝██║██╔══╝  ██╔══██║██╔══╝  ██║  ██║██║
 *  ██║ ╚═╝ ██║███████╗██║  ██║███████╗██████╔╝██║
 *  ╚═╝     ╚═╝╚══════╝╚═╝  ╚═╝╚══════╝╚═════╝ ╚═╝
 *
 *  Md. Mehedi Hasan
 */

// ─────────────────────────────────────────────────────────────

#include <bits/stdc++.h>
using namespace std;

#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define fixed(n)                    fixed << setprecision(n)
#define ceil_(n, m)                 (((n) + (m) - 1) / (m))
#define add_mod(a, b, m)            (((a % m) + (b % m)) % (m))
#define sub_mod(a, b, m)            (((a % m) - (b % m) + (m)) % (m))
#define mul_mod(a, b, m)            (((a % m) * (b % m)) % (m))

#define ll                          long long
#define ull                         unsigned long long
#define vi                          vector<int>
#define vll                         vector<ll>
#define pi                          pair<int, int>
#define pll                         pair<ll, ll>
#define vpi                         vector<pair<int, int>>
#define vpll                        vector<pair<ll, ll>>
#define mi                          map<int, int>
#define mll                         map<ll, ll>

#define nl                          '\n'
#define sp                          ' '
#define pb                          push_back
#define ff                          first
#define ss                          second

#define yes                         cout << "YES" << nl
#define no                          cout << "NO" << nl

#define ip(x)                       for (auto &it : x) cin >> it
#define sz(x)                       int((x).size())
#define all(x)                      (x).begin(), (x).end()
#define rall(x)                     (x).rbegin(), (x).rend()
#define Sort(x)                     sort(all(x))
#define Rsort(x)                    sort(rall(x))

constexpr int INF  = 1 << 30;
constexpr int MOD  = 1e9 + 7;
constexpr ll  LINF = 1LL << 62;

void solve()
{
    int n, m; cin >> n >> m;
    vector<vector<ll>> v(n, vector<ll>(m));
    vll r(n, 0), c(m, 0);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            r[i] ^= v[i][j];
            c[j] ^= v[i][j];
        }
    }
    ll maxRow = *max_element(all(r)), maxCol = *max_element(all(c));
    int ridx = max_element(all(r)) - r.begin(), cidx = max_element(all(c)) - c.begin();
    v[ridx][cidx] = maxRow ^ v[ridx][cidx];
    vll r1(n, 0), c1(m, 0);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            r1[i] ^= v[i][j];
            c1[j] ^= v[i][j];
        }
    }
    cout << accumulate(all(r1), 0LL) + accumulate(all(c1), 0LL) << nl;
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// ─────────────────────────────────────────────────────────────
// Coded by : Md. Mehedi Hasan
// ─────────────────────────────────────────────────────────────

// https://codeforces.com/gym/106315/problem/G