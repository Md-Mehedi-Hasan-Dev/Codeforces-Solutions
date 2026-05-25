#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;
 
int main()
{
    Md_Mehedi_Hasan;
 
    int t; cin >> t;
    while(t--)
    {
        ll n, x, distance_between_two_pnts = INT_MIN;
        cin >> n >> x;
        vector<ll> v;
        v.push_back(0);
        for(int i = 0; i < n; i++)
        {
            ll value; cin >> value;
            v.push_back(value);
        }
        v.push_back(x);
        n = v.size();
        for(int i = 1; i < n; i++)
        {
            if(i == n - 1)
                distance_between_two_pnts = max(distance_between_two_pnts, (2 * (v[i] - v[i - 1])));
            else
                distance_between_two_pnts = max(distance_between_two_pnts, v[i] - v[i - 1]);
        }
        cout << distance_between_two_pnts << endl;
    }
 
    return 0;
}
 
// https://codeforces.com/problemset/problem/1901/A