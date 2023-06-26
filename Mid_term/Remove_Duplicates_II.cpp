#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>r;
    while (true)
    {
       int v;
       cin>>v;
       if(v==-1) break;
       r.push_back(v);
    }
    r.sort();
    r.unique();
    for (int v:r)
    {
        cout<<v<<" ";
    }
    
    
    return 0;
}