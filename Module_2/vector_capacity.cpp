#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // v.clear();
    v.resize(5,2);
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    // cout<<v[2];
     
    return 0;
}