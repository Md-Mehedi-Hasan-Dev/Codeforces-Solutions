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
    int n, k, x; cin >> n >> k >> x;
    if(x != 1)
    {
        yes;
        cout << n << nl;
        for(int i = 0; i < n; i++)
            cout << 1 << " ";
        cout << nl;
    }
    else
    {
        if(k == 1) no;
        else if(k == 2)
        {
            if(n & 1 == 1) no;
            else
            {
                yes;
                cout << n / 2 << nl;
                for(int i = 0; i < n / 2; i++)
                    cout << 2 << " ";
                cout << nl;
            }
        }
        else
        {
            yes;
            if(n & 1 == 1)
            {
                int cnt = (n - 3) / 2;
                cout << cnt + 1 << nl;
                cout << 3 << nl;
                for(int i = 0 ; i < cnt; i++)
                    cout << 2 << " ";
                cout << nl;
            }
            else
            {
                cout << n / 2 << nl;
                for(int i = 0; i < n / 2; i++)
                    cout << 2 << " ";
                cout << nl;
            }
        }
    }
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

// https://codeforces.com/problemset/problem/1845/A