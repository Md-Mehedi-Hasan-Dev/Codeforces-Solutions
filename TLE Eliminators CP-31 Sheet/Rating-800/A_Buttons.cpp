#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define vi vector<int>
#define ip(x) for (auto &it : x) cin >> it
#define all(x) x.begin(), x.end()
using ll = long long;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        ll a, b, c; cin >> a >> b >> c;
        if(a > b) cout << "First" << endl;
        else if(a == b && c & 1 == 1) cout << "First" << endl;
        else cout << "Second" << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1858/A