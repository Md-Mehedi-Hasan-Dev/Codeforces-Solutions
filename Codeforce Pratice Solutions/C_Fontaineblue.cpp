// - Md. Mehedi Hasan

#include <bits/stdc++.h>
#define Md_Mehedi_Hasan               \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
using namespace std;
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<long long>
#define ip(x)          \
    for (auto &it : x) \
    cin >> it
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(a) (int)a.size()
using ll = long long;
using ull = unsigned long long;

void solve()
{
    int n; cin >> n;
    int total_elements = 2 * n - 2;
    vll v(total_elements);
    ip(v);
    sort(all(v));
    bool first_printed = false;
    for (int i = 0; i < total_elements; i++)
    {
        if (i == total_elements - 1 || v[i] != v[i + 1])
        {
            if (first_printed)
                cout << " ";
            cout << v[i];
            first_printed = true;
        }
        else
            i++;
    }
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://codeforces.com/gym/106457/problem/C