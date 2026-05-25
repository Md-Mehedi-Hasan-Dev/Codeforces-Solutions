#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q; cin >> n >> q;
    vector<vector<long long>> v(n);

    while(q--)
    {
        int p, t; cin >> p >> t;

        if(p == 0)
        {
            long long x; cin >> x;
            v[t].push_back(x);
        }
        else if(p == 1)
        {
            for(int i = 0; i < v[t].size(); i++)
            {
                if(i) cout << " ";
                cout << v[t][i];
            }
            cout << endl;
        }
        else
        {
            v[t].clear();
        }
    }

    return 0;
}

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_D