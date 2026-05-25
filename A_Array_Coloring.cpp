#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int n, cnt = 0; cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 != 0) cnt++;
        }
        (cnt % 2 == 0) ? cout <<  "YES\n" : cout << "NO\n";
    }
    return 0;
}