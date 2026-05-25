#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int n, ans = 0; cin >> n;
        string s; cin >> s;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                ans = 2;
                break;
            }
            else if(s[i] == '.')
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1900/A