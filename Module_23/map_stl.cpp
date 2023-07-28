#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["Rahat"] = 12;
    mp["Ahad"] = 14;
    mp["Rakib"] = 80;
    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    if (mp.count("Rahat"))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}