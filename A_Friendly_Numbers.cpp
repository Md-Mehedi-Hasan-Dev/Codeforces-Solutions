#include <bits/stdc++.h>
using namespace std;

long long digit_sum(long long num)
{
    long long s = 0;
    while(num)
    {
        s += num % 10;
        num /= 10;
    }
    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        long long x; cin >> x;
        int cnt = 0;
        if(x % 9 != 0)
            cout << 0 << endl;
        else
        {
            for(int i = 1; i <= 100; i++)
            {
                long long y = x + i;
                if(digit_sum(y) == i)
                    cnt++;
            }
            cout << cnt << endl;
        }
            
    }
    return 0;
}