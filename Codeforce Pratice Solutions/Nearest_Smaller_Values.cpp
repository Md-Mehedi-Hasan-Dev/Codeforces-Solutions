#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;
using pi = pair<int, ll>;

int main()
{
    Md_Mehedi_Hasan;

    int n; cin >> n;
    vector<ll> v(n);
    for(ll &i : v)
        cin >> i;
    stack<int> st; // Monotonic Stack of Indices
    for(int i = 0; i < n; i++)
    {
        while(!st.empty() && v[st.top()] >= v[i])
            st.pop();
        if(st.empty()) cout << 0 << " ";
        else cout << st.top() + 1 << " ";
        st.push(i);
    }

    return 0;
}

// https://cses.fi/problemset/task/1645