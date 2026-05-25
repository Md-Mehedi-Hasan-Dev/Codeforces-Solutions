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
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        while(!v.empty())
        {
            auto it = max_element(v.begin(), v.end(), [](int a, int b) {
                return a <= b;
            });
            v.erase(it, v.end());
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}