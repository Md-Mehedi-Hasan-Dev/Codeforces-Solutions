#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q; cin >> n;
    vector<ll> v(n);
    for(ll &i : v)
        cin >> i;
    cin >> q;
    while(q--)
    {
        ll y; cin >> y;
        auto it = lower_bound(v.begin(), v.end(), y);
        if(*(it) == y)
            cout << "Yes ";
        else
            cout << "No ";
        cout << (it - v.begin()) + 1 << endl;
    }
    return 0;
}

// https://www.hackerrank.com/challenges/cpp-lower-bound/problem