#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--)
    {
        int n, cnt = 0, mx = INT_MIN; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        for (int i = 0; i < n; i++)
            if(v[i] == mx)
                cnt++;
        cout << cnt << endl;
    }
    
    return 0;
}