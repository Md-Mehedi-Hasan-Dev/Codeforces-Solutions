#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    string s; cin >> s;
    set<char> inBox;
    stack<vector<char>> scopeStack;
    scopeStack.push({}); // no need to check for (not empty stack)
    bool flag = true;
    for(char c : s)
    {
        if(c == '(')
            scopeStack.push({});
        else if(c == ')')
        {
            for(char d : scopeStack.top())
                inBox.erase(d);
            scopeStack.pop();
        }
        else
        {
            if(inBox.count(c))
            {
                flag = false;
                break;
            }
            inBox.insert(c);
            scopeStack.top().push_back(c);
        }
    }
    cout << (flag ? "Yes\n" : "No\n");

    return 0;
}

// https://atcoder.jp/contests/abc283/tasks/abc283_d