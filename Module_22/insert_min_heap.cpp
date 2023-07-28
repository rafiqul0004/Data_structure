#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int curr_indx = v.size() - 1;
        while (curr_indx != 0)
        {
            int parrent_idx = (curr_indx - 1) / 2;
            if (v[parrent_idx] > v[curr_indx])
            {
                swap(v[parrent_idx], v[curr_indx]);
            }
            else
                break;
            curr_indx = parrent_idx;
        }
    }
    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}