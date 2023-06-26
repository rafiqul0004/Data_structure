#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>r={3,8,1,5,2,9,4,1,2,4,6,9};
    // r.remove(1)
    r.sort();
    // r.sort(greater<int>());
    r.unique();
    r.reverse();
    for ( int v:r)
    {
       cout<<v<<" ";
    }
    
    return 0;
}