#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        stack<char> sta;
        stack<char> stb;
        string s;
        cin >> s;
        for (char ch : s)
        {
            if (ch == 'A')
            {
                sta.push(ch);
            }
            else if (ch == 'B')
            {
                stb.push(ch);
            }
        }
        if (sta.size() == stb.size())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}