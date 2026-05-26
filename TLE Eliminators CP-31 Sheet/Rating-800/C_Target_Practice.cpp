#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

vector<vector<char>> v(10, vector<char>(10));

int main()
{
    Md_Mehedi_Hasan;

    int t; cin >> t;
    while(t--)
    {
        int pnt = 0;
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                cin >> v[i][j];
                if(v[i][j] == 'X')
                    pnt += min({i + 1, j + 1, 10 - i, 10 - j});
            }
        }
        cout << pnt << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1873/C