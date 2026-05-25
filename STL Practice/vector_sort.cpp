#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<long long> v(n);
    for(auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    for(int i : v)
        cout << i << " ";
    return 0;
}

// https://www.hackerrank.com/challenges/vector-sort/problem