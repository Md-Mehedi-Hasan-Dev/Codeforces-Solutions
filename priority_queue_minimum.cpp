#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;

int main()
{
    Md_Mehedi_Hasan;

    int q; cin >> q;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    string s;
    while(q--)
    {
        cin >> s;
        if(s == "push")
        {
            ll x; cin >> x;
            pq.emplace(x);
        }
        else if(s == "pop")
            pq.pop();
        else
            cout << pq.top() << endl;
    }

    return 0;
}

// https://vjudge.net/problem/Gym-381668C