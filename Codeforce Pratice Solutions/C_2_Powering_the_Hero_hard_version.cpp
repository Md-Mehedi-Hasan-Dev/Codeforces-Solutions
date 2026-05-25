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
        ll army = 0, x;
        priority_queue<ll> pq;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            if(x)
                pq.emplace(x);
            else
            {
                if(!pq.empty())
                {
                    army += pq.top();
                    pq.pop();
                }
            }
        }
        cout << army << endl;
    }

    return 0;
}

// https://codeforces.com/contest/1800/problem/C2