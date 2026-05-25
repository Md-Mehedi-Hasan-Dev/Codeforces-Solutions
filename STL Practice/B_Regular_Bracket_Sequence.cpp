#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    string s; cin >> s;
    stack<char> st;
    int cnt = 0;
    for(char p : s)
    {
        if(p == '(' || p == '{' || p == '[')
            st.push(p);
        else if(!st.empty())
        {
            if((st.top() == '(' && p == ')') || (st.top() == '{' && p == '}') || (st.top() == '(' && p == ']'))
            {
                st.pop();
                cnt += 2;
            }
            else
                st.push(p);
        }
        else
            st.push(p);
    }
    cout << cnt << endl;

    return 0;
}

// https://codeforces.com/contest/26/problem/B