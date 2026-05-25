#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, k, x; cin >> n >> k;

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        pq.emplace(x);

        if(pq.size() > k)
            pq.pop();

        if(i >= k - 1)
            cout << pq.top() << endl;
    }

    return 0;
}

// https://atcoder.jp/contests/abc234/tasks/abc234_d