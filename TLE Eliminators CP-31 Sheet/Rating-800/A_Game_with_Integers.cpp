#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if(n % 3 == 1 || n % 3 == 2)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1899/A