#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    queue<ll> q;
    ll type, n;
    while(t--)
    {
        cin >> type;
        if(type == 1) 
        {
            cin >> n;
            q.push(n);
        }
        else if(type == 2)
        {
            if(!q.empty())
                q.pop();
        }
        else
        {
            if(!q.empty())
                cout << q.front() << "\n";
            else
                cout << "Empty!" << "\n";
        }
    }

    return 0;
}

// https://www.spoj.com/problems/QUEUEEZ/en/