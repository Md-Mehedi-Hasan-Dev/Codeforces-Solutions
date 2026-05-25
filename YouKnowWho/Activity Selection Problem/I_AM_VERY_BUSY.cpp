#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

struct Activity
{
    int start, finis;
};

int main()
{
    Md_Mehedi_Hasan;

    int t, N, m, n; cin >> t;
    while(t--)
    {
        cin >> N;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        while(N--)
        {
            cin >> m >> n;
            pq.emplace(n, m);
        }
        int cnt = 0;
        int finisTime = -1;
        while(!pq.empty())
        {
            pair<int, int> activity = pq.top();
            pq.pop();
            if(activity.second >= finisTime)
            {
                finisTime = activity.first;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}