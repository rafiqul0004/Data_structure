// 1. Unique_Sorted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> a;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            a.insert(x);
        }
        vector<int> v;
        for (auto it = a.begin(); it != a.end(); it++)
        {
            v.push_back(*it);
        }
        reverse(v.begin(), v.end());
        for (auto val : v)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}