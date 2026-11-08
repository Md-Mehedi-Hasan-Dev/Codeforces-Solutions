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
const ll MOD = 1006903069LL;
constexpr ll  LINF = 1LL << 62;

void solve()
{
    int n, ka, kb; cin >> n;
    cin >> ka;
    vector<tuple<int, int, ll>> A(ka);
    for(int t = 0; t < ka; t++)
    {
        int i, j; cin >> i >> j;
        ll x; cin >> x;
        A[t] = {i, j, x % MOD};
    }
    cin >> kb;
    unordered_map<ll, ll> B;
    B.reserve(2 * kb);
    for(int t = 0; t < kb; t++)
    {
        int i, j; cin >> i >> j;
        ll x; cin >> x;
        ll key = 1LL * i * (n + 1) + j;
        B[key] = x % MOD;
    }
    ll trace = 0;
    for(auto [i, j, x] : A)
    {
        ll key = 1LL * j * (n + 1) + i;
        if(B.find(key) != B.end())
            trace = (trace + x * B[key]) % MOD;
    }
    cout << trace << nl;
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

// https://codeforces.com/gym/106262/problem/L