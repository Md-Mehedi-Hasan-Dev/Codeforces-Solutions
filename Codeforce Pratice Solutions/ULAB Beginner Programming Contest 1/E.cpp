// - Md. Mehedi Hasan

#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define nl '\n'
#define sp " "
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<long long>
#define ip(x) for (auto &it : x) cin >> it
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)a.size()
using ll = long long;
using ull = unsigned long long;

void solve()
{
    string s;
    while(getline(cin, s))
    {
        if(s == "DONE") break;
        string ans = "", rev;
        for(char c : s)
            if(isalpha(c))
                ans += tolower(c);
        rev = ans;
        reverse(all(ans));
        cout << (rev == ans ? "You won't be eaten!" : "Uh oh..") << nl;
    }
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://vjudge.net/contest/830978#problem/E