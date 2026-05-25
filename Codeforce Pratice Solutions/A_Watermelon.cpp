#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num, flag = 0;
    cin >> num;
    for(int i = 1, j = num - 1; i < num, j > 0; i++, j--)
    {
        if((i % 2 == 0) && (j % 2 == 0) && (i + j == num))
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

//submitting again for cph setup