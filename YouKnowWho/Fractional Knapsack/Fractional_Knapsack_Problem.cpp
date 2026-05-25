#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
using ll = long long;

struct Item
{
    int value;
    int weight;
};

struct comp
{
    bool operator()(Item i1, Item i2)
    {
        return (long long)i1.value * i2.weight < (long long)i2.value * i1.weight;
    }
};

int main()
{
    Md_Mehedi_Hasan;

    ll N, W, v, w; cin >> N >> W;
    priority_queue<Item, vector<Item>, comp> pq;
    while(N--)
    {
        cin >> v >> w;
        Item i;
        i.value = v;
        i.weight = w;
        pq.emplace(i);
    }
    double total_value = 0.0;
    while(!pq.empty() && W > 0)
    {
        auto top = pq.top();
        pq.pop();
        if(top.weight <= W)
        {
            total_value += top.value;
            W -= top.weight;
        }
        else
        {
            total_value += (double) top.value / top.weight * W;
            W = 0;
        }
    }
    if (floor(total_value) == total_value)
        cout << (long long)total_value << endl;
    else
        cout << fixed << setprecision(8) << total_value << endl;

    return 0;
}