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
    int n, a, b, c; cin >> n;
    vector<int> v(411, 0);
    vector<vector<bool>> vis(411, vector<bool>(14, false));
    while(n--)
    {
        cin >> a >> b >> c;
        if(vis[a][b])
        {
            cout << 0 << nl;
            continue;
        }
        vis[a][b] = true;
        if(c < 240)
        {
            v[a]++;
            cout << b << nl;
        }
        else
        {
            if(v[a] < 3)
            {
                v[a]++;
                cout << b << nl;
            }
            else
                cout << 0 << nl;
        }
    }
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// ─────────────────────────────────────────────────────────────
// Coded by : Md. Mehedi Hasan
// ─────────────────────────────────────────────────────────────

// https://codeforces.com/gym/106252/problem/I