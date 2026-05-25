#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;

int main()
{
    Md_Mehedi_Hasan;

    int n, q; cin >> n >> q;
    vector<priority_queue<ll>> vpq(n);
    while(q--)
    {
        int type, t; cin >> type >> t;
        if(type == 0)
        {
            ll x; cin >> x;
            vpq[t].push(x);
        }
        else if(type == 1)
        {
            if(!vpq[t].empty())    
                cout << vpq[t].top() << endl;
        }
        else
        {
            if(!vpq[t].empty()) 
                vpq[t].pop();
        }
    }

    return 0;
}

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_C