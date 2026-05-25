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
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i = 0; i < n; i++)
        {
            int cb = 0, cs = 0; 
            for(int j = i + 1; j < n; j++)
            {
                cb += arr[i] > arr[j];
                cs += arr[i] < arr[j];
            }
            cout << max(cb, cs) << " ";
        }
        cout << endl;
    }

    return 0;
}

// https://codeforces.com/contest/2209/problem/B