// - Md. Mehedi Hasan

#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define nl '\n'
#define sp " "
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<long long>
#define ip(x) for (auto &it : x) cin >> it
#define all(x) x.begin(), x.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(a) (int)a.size()
using ll = long long;
using ull = unsigned long long;

struct customer
{
    int at, dt, customer_id;
};


void solve()
{
    int n; cin >> n;
    vector<customer> customers(n);
    vector<int> ans(n);
 
    for(int i = 0; i < n; i++)
    {
        cin >> customers[i].at >> customers[i].dt;
        customers[i].customer_id = i;
    }
 
    sort(customers.begin(), customers.end(), [](customer &x, customer &y){
        if(x.at == y.at)
            return x.dt < y.dt;
        return x.at < y.at;
    });
 
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    int roomCount = 0;
 
    for(int i = 0; i < n; i++)
    {
        auto [at, dt, idx] = customers[i];
 
        if(!pq.empty() && pq.top().ff < at)
        {
            auto [endTime, roomid] = pq.top();
            pq.pop();
            ans[idx] = roomid;
            pq.emplace(dt, roomid);
        }
        else
        {
            roomCount++;
            ans[idx] = roomCount;
            pq.emplace(dt, roomCount);
        }
    }
 
    cout << roomCount << endl;
    for(auto room : ans)
        cout << room << " ";
}

int main()
{
    Md_Mehedi_Hasan;

    solve();

    return 0;
}

// https://vjudge.net/contest/837327#problem/B