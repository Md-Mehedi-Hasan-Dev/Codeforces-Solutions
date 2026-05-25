#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, m; cin >> n >> m;
    queue<int> q;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        q.push(i + 1);
    }
    int l;
    while(!q.empty())
    {
        l = q.front();
        q.pop();
        if(v[l - 1] > m)
        {
            v[l - 1] -= m;
            q.push(l);
        }
    }
    cout << l;

    return 0;
}

// https://codeforces.com/contest/450/problem/A