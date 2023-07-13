#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> st;
    int a;
    cin >> a;
    while (a--)
    {
        int b;
        cin >> b;
        if (b == 1)
        {
            if (st.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << st.front() << endl;
                st.pop();
            }
        }
        else if (b == 0)
        {
            string s;
            cin >> s;
            st.push(s);
        }
    }

    return 0;
}