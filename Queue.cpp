#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;

int main()
{
    Md_Mehedi_Hasan;

    int n, quantam, t; cin >> n >> quantam;
    string s;
    ll cnt = 0;
    queue<pair<string, int>> q;
    while(n--)
    {
        cin >> s >> t;
        q.push({s,t});
    }
    while(!q.empty())
    {
        auto f = q.front();
        q.pop();
        if(f.second > quantam)
        {
            f.second -= quantam;
            q.push(f);
            cnt += quantam;
        }
        else if(f.second == quantam)
        {
            cnt += quantam;
            cout << f.first << " " << cnt << endl;
        }
        else
        {
            cnt += f.second;
            cout << f.first << " " << cnt << endl;
        }
    }
    
    return 0;
}

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_B