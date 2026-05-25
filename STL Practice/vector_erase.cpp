#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<long long> v(n);
    for(long long &i : v)
        cin >> i;
    int x, a, b; cin >> x >> a >> b;
    v.erase(v.begin() + x - 1);
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    cout << v.size() << endl;
    for(long long i : v)
        cout << i << " ";
    return 0;
}

// https://www.hackerrank.com/challenges/vector-erase/problem