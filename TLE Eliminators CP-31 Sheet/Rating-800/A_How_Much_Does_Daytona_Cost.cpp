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
        for(int &i : v)
            cin >> i;
        if(find(v.begin(), v.end(), k) != v.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1878/A