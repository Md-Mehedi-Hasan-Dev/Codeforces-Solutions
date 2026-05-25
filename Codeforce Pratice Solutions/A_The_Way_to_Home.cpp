#include <bits/stdc++.h>
using namespace std;

int n, d, cnt = 0;
string s;
bool vis[105];

void steps(int i)
{
    if(i == n - 1) return;
    for (int j = i + d; j > i; j--)
    {
        if(s[j] == '1')
        {
            vis[j] = true;
            cnt++;
            steps(j);
            break;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> d;
    cin >> s;
    memset(vis, false, sizeof(vis));
    steps(0);
    cout << endl;
    if(vis[n - 1]) cout << cnt << endl;
    else cout << -1 << endl;
    return 0;
}