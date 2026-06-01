// - Md. Mehedi Hasan

#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<long long>
#define ip(x) for (auto &it : x) cin >> it
#define all(x) x.begin(), x.end()
using ll = long long;
using ull = unsigned long long;

void solve()
{
    string s; cin >> s;
    int l = s.find('['), r = s.rfind(']'), flag = 1, ans = 0;
    if(l == string::npos || r == string::npos || l >= r)
        flag = 0;
    int c1 = s.find(':', l + 1), c2  = s.rfind(':', r - 1);
    if(c1 == string::npos || c2 == string::npos || c1 >= c2)
        flag = 0;
    for(int i = c1 + 1; i < c2; i++)
        ans += (s[i] == '|');
    cout << (flag ? ans + 4 : -1);
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://codeforces.com/problemset/problem/1101/B