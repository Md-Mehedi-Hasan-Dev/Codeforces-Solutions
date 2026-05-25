#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(int &i : v) cin >> i;
        int sum = accumulate(v.begin(), v.end(), 0);
        ((sum % 2 != 0) || (n * k) % 2 == 0) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}