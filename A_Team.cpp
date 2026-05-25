#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    int n, cnt = 0; cin >> n;
    while ((n--))
    {
        int a, b, c; cin >> a >> b >> c;
        if(a + b + c >= 2) cnt++;
    }
    cout << cnt << endl;

    return 0;
}