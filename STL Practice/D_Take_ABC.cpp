#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    string s, st; cin >> s;
    for(char c : s)
    {
        st.push_back(c);
        int len = st.size();
        if(len >= 3 && st[len - 3] == 'A' && st[len - 2] == 'B' && st[len - 1] == 'C')
            st.erase(len - 3, 3);
    }
    cout << st;

    return 0;
}

// https://atcoder.jp/contests/abc328/tasks/abc328_d

/*
Similar way of solution:
string s;
cin >> s;

string res = ""; 
for (char c : s) {
    res.push_back(c);
    if (res.size() >= 3) {
        if (res.substr(res.size() - 3) == "ABC") {
            rep(i, 0, 3) res.pop_back();
        }
    }
}
cout << res << endl;
*/
