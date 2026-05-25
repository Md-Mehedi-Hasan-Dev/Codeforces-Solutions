#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t, cnt = 0, maxn = 1005;
    while(cin >> t && t != 0)
    {
        map<int, int> m;
        for(int i = 0; i < t; i++)
        {
            int n; cin >> n;
            while(n--)
            {
                int num; cin >> num;
                m[num] = i;
            }
        }
        cout << "Scenario #" << ++cnt << endl;
        queue<int> q1, q2[maxn];
        string command;
        while(cin >> command && command != "STOP")
        {
            if(command == "ENQUEUE")
            {
                int x; cin >> x;
                if(q2[m[x]].empty())
                    q1.push(m[x]);
                q2[m[x]].push(x);
            }
            else if(command == "DEQUEUE")
            {
                cout << q2[q1.front()].front() << endl;
                q2[q1.front()].pop();
                if(q2[q1.front()].empty()) q1.pop();
            }
        }
        cout << endl;
    }

    return 0;
}

// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=481