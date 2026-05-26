#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int n, m, ans = -1; cin >> n >> m;
        string x, s; cin >> x >> s;
        for(int i = 0; i <= 5; i++)
        {
            if(x.find(s) != string::npos)
            {
                ans = i;
                break;
            }
            x += x;
        }
        cout << ans << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1881/A