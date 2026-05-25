#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        priority_queue<int> pq;
        int x;
        while(n--)
        {
            cin >> x;
            pq.emplace(x);
            int half = x / 2;
            while(half != 0)
            {
                pq.emplace(half);
                half /= 2;
            }
        }
        while(!pq.empty())
        {
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << endl;
    }

    return 0;
}

// https://www.codechef.com/problems/CCOP8