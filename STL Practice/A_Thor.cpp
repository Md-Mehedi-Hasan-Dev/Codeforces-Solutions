#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, q, total = 0, notif_idx = 0; cin >> n >> q;

    vector<set<int>> e(n + 1);
    queue<pair<int, int>> Q;
    vector<bool> marked(q + 1, false);

    while(q--)
    {
        int type; cin >> type;
        if(type == 1)
        {
            int x; cin >> x;
            total++;
            notif_idx++;
            Q.push({notif_idx, x});
            e[x].insert(notif_idx);
        }
        else if(type == 2)
        {
            int x; cin >> x;
            total -= e[x].size();
            for(int idx : e[x])
                marked[idx] = true;
            e[x].clear();
        }
        else
        {
            int t; cin >> t;
            while(!Q.empty() && Q.front().first <= t)
            {
                int idx = Q.front().first;
                int app = Q.front().second;
                Q.pop();
                if(!marked[idx])
                {
                    marked[idx] = true;
                    e[app].erase(idx);
                    total--;
                }
            }
        }
        cout << total << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/704/A