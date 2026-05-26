#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int n, ans = 0; cin >> n; n--;
        while(n--)
        {
            int x; cin >> x;
            ans += x;
        }
        cout << (-1 * ans) << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1877/A