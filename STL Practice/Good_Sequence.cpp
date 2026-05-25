#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    map<long long, int> mp;
    for(int i = 0; i < n; i++)
    {
        long long x; cin >> x;
        mp[x]++;
    }
    long long result = 0;
    for(auto i : mp)
    {
        if(i.first <= i.second)
            result += (i.second - i.first);
        else
            result += i.second;
    }
    cout << result;
    return 0;
}

// https://atcoder.jp/contests/arc087/tasks/arc087_a?lang=en