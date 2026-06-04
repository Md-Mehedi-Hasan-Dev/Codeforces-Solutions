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

const int N = 1e6 + 5;
vector<bool> prime(N, true);

void sieve()
{
    prime[0] = prime[1] = false;
    for(int i = 2; i * i < N; i++)
    {
        if(prime[i])
            for(int j = i * i; j < N; j += i)
                prime[j] = false;
    }
}

void solve()
{
    sieve();
    int n; cin >> n;
    while(n--)
    {
        ll x, r; cin >> x;
        r = sqrtl(x);
        (r * r == x && prime[r]) ? yes : no;
    }
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://codeforces.com/problemset/problem/230/B