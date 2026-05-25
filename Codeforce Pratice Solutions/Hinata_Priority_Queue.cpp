#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;

int main()
{
    Md_Mehedi_Hasan;

    int n, x; cin >> n;
    ll mul = 1;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        mul *= x;
        pq.emplace(x);
        if(pq.size() > 3)
        {
            mul /= pq.top();
            pq.pop();
        }
        if(pq.size() == 3)
            cout << mul << endl;
        else 
            cout << -1 << endl;
    }

    return 0;
}

// https://www.hackerrank.com/contests/tlecc2/challenges/hinata-priority-queue