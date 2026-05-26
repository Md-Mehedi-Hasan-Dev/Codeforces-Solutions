#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, ans = INT_MAX; cin >> n;
    while(n--)
    {
        int x; cin >> x;
        ans = min(ans, abs(x));
    }
    cout << ans << endl;

    return 0;
}

// https://codeforces.com/problemset/problem/1866/A