#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int n, mx = 0, mn = 0; cin >> n;
        string s; cin >> s;
        // for Max
        for(int i = 0; i < n; i++)
        {
            if(s[i - 1] == '1' && s[i + 1] == '1')
            {
                s[i] = '1';
            }
        }
        for(char c : s)
            if(c == '1')
                mx++;
        for(int i = 0; i < n; i++)
        {
            if(s[i - 1] == '1' && s[i + 1] == '1')
            {
                s[i] = '0';
            }
        }
        for(char c : s)
            if(c == '1')
                mn++;
        cout << mn << " " << mx << endl;
    }
    return 0;
}