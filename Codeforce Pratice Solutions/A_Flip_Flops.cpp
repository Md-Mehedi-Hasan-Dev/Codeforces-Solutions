#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        ll c, k; cin >> c >> k;
        vector<ll> v(n);
        for(ll &i : v) cin >> i;
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++)
        {
            ll tmp = k;
            if(v[i] <= c)
            {
                tmp = max(0LL, min(k, c - v[i]));
                k -= tmp;
                c += v[i] + tmp;
            }
        }
        cout << c << endl;
    }

    return 0;
}

// https://codeforces.com/contest/2209/problem/A