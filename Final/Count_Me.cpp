// Count_Me
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> mp;
        int max = INT_MIN;
        string r;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max)
            {
                max = mp[word];
                r = word;
            }
        }
        // int max = INT_MIN;
        // string r;
        // for (auto it = mp.begin(); it != mp.end(); it++)
        // {
        //     if (it->second > max)
        //     {
        //         max = it->second;
        //         r = it->first;
        //     }
        // }
        cout << r << " " << max << endl;
    }

    return 0;
}