#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        stack<char> st;
        string b;
        cin >> b;
        for (char c : b)
        {
            if (!st.empty() && st.top() == 'A' && c == 'B')
            {
                st.pop();
            }
            else if (!st.empty() && st.top() == 'B' && c == 'A')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        if (!st.empty())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}