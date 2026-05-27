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
        vector<ll> v(n), v1, v2;
        for(ll &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        v1.push_back(v[0]);
        for(int i = 1; i < n; i++)
        {
            if(v1.back() % v[i] != 0 && v[i] > v1.back())
                v2.push_back(v[i]);
            else
                v1.push_back(v[i]);
        }
        if(v1.size() && v2.size())
        {
            cout << v1.size() << " " << v2.size() << endl;
            for(ll i : v1)
                cout << i << " ";
            cout << endl;
            for(ll i : v2)
                cout << i << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1859/A