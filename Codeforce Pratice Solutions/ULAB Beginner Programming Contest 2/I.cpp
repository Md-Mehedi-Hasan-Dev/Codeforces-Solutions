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

ll digitSum(ll num)
{
    ll sum = 0;
    while(num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void solve()
{
    ll n, a, b = 0; cin >> n;
    while(b * 10 + 9 <= n)
        b = b * 10 + 9;
    a = n - b;
    cout << digitSum(a) + digitSum(b);
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://vjudge.net/contest/837327#problem/I