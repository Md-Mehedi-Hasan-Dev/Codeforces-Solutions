#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int n, cnt = 0; cin >> n;
        string s; cin >> s;
        stack<pair<char, int>> st;
        for(int i = 0; i < n; i += 2)
        {
            if((i - 1 >= 1) && s[i - 1] == '(')
                s[i] = ')';
            else if(i + 1 < n && (s[i + 1] == ')' || s[i + 1] == '('))
                s[i] = '(';
        }
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
                st.push({s[i], i});
            else if(!st.empty() && s[i] == ')')
            {
                if(st.top().first == '(')
                {
                    cnt += (i - st.top().second);
                    st.pop();
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}

// https://codeforces.com/contest/1997/problem/C