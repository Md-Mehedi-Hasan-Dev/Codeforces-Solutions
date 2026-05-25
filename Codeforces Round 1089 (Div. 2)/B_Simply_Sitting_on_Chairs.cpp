#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t, n; cin >> t;
    while(t--)
    {
        cin >> n;
        int cnt = 0;
        vector<int> v(n);
        vector<int> vis(n, -1);
        for(int &i : v) cin >> i;
        for(int i = 0; i < n; i++)
        {
            if(vis[i] == 1) break;
            if(i < v[i] - 1) continue;
            cnt++;
            vis[v[i] - 1] = 1;
            vis[i] = 1;
        }
        cout << cnt << endl;
    }

    return 0;
}

// https://codeforces.com/contest/2210/problem/B