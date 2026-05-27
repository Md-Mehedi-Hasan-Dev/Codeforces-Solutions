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
        vector<ll> v;
        for(int i = 0; i < n; i++)
        {
            ll x; cin >> x;
            if(i && v.back() > x)
                v.push_back(1);
            v.push_back(x);
        }
        cout << v.size() << endl;
        for(ll i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1862/B