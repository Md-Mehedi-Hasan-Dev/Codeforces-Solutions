#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    set<pair<string, string>> stp;
    for(int i = 0; i < n; i++)
    {
        string s1, s2; cin >> s1 >> s2;
        stp.emplace(s1, s2);
    }
    cout << stp.size() << endl;
    return 0;
}