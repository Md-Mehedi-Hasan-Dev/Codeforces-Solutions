#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        bool flag = false;
        for(int i = 0; i < n; i++)
        {
            if(s1[i] == '1' && s2[i] == '1')
                flag = true;
        }
        cout << (flag ? "NO\n" : "YES\n");
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

bool vis[2][105];
int n;
vector<pair<int, int>> mov = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}, {0, -1}, {0, 1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    if(i < 0 || i >= 2 || j < 0 || j >= n)
        return false;
    return true;
}

void dfs(int si, int sj, vector<string> &grid)
{
    vis[si][sj] = true;
    for(int i = 0; i < 8; i++)
    {
        int ci = si + mov[i].first;
        int cj = sj + mov[i].second;
        if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '0')
            dfs(ci, cj, grid);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        vector<string> grid(2);
        cin >> grid[0] >> grid[1];
        memset(vis, false, sizeof(vis));
        
        if(grid[0][0] == '0')
            dfs(0, 0, grid);

        cout << (vis[1][n-1] ? "YES\n" : "NO\n");
    }

    return 0;
}
*/