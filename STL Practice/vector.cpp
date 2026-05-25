#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q; cin >> q;
    vector<long long> v;
    while(q--)
    {
        int x; cin >> x;
        if(x == 0)
        {
            long long n; cin >> n;
            v.push_back(n);
        }
        else if(x == 1)
        {
            int p; cin >> p;
            cout << v[p] << endl;
        }
        else
            v.pop_back();
    }
    return 0;
}

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_A