#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;

int main()
{
    Md_Mehedi_Hasan;

    priority_queue<ll> pq;
    string op;
    ll n;
    while(cin >> op && op != "end")
    {
        if(op == "insert")
        {
            cin >> n;
            pq.emplace(n);
        }
        else if(op == "extract")
        {
            cout << pq.top() << endl;
            pq.pop();
        }
    }

    return 0;
}

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_9_C