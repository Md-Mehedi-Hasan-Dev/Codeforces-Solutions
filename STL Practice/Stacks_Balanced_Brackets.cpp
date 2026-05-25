#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

void solve(string s)
{
    stack<char> st;
    for(char p : s)
    {
        if(p == '(' || p == '{' || p == '[')
            st.push(p);
        else if(!st.empty())
        {
            if((st.top() == '(' && p == ')') || (st.top() == '{' && p == '}') || (st.top() == '[' && p == ']'))
                st.pop();
            else
                st.push(p);
        }
        else 
            st.push(p);
    }
    (st.empty()) ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        solve(s);
    }

    return 0;
}

// https://www.hackerrank.com/challenges/ctci-balanced-brackets/problem