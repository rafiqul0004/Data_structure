#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>r={1,2,3,4,5,6,7,8,9};
    // list<int>r2;
    // r2=r;
    r.push_back(10);
    r.push_front(0);
    r.pop_back();
    r.pop_front();
    r.insert(next(r.begin(),4),12);
    r.erase(next(r.begin(),4));
    for ( int v:r)
    {
        cout<<v<<" ";
    }
    
    return 0;
}