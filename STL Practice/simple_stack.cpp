#include <bits/stdc++.h>
#define Md_Mehedi_Hasan ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
    Md_Mehedi_Hasan;

    stack<int> st;
    string command; cin >> command;
    
    while (command != "exit")
    {
        if(command == "push")
        {
            int n; cin >> n;
            st.push(n);
            cout << "ok" << endl;
        }
        else if(command == "pop")
        {
            cout << st.top() << endl;
            st.pop();
        }
        else if(command == "back")
            cout << st.top() << endl;
        else if(command == "size")
            cout << st.size() << endl;
        else if(command == "clear")
        {
            stack<int> emt;
            st.swap(emt);
            cout << "ok" << endl;
        }
        cin >> command;
    }
    if(command == "exit")
    {
        cout << "bye" << endl;
        return 0;
    }
}

// https://eolymp.com/en/problems/6122