#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
int main() {
    Md_Mehedi_Hasan;
    
    int t; cin >> t;
    while(t--)
    {
        int n, p, x; cin >> n;
        p = n;
        while(n--)
        {
            cin >> x;
            cout << p + 1 - x << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// https://codeforces.com/contest/1831/problem/A