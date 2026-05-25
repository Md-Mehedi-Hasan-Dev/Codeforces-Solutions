#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, result = ""; cin >> s;
    vector<tuple<int, int, char>> v;
    int n = s.size(), balance = 0;
    for(int i = 0; i < n; i++)
    {
        v.push_back({balance, -i, s[i]});
        if(s[i] == '(') balance++;
        else balance--;
    }
    sort(v.begin(), v.end());
    for(auto t : v)
        result += get<2>(t);
    cout << result;
    return 0;
}