#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1={1,2,3,4,5};
    vector<int>v2={10,11,12};
    v1.insert(v1.begin()+2,v2.begin(),v2.end());
    for (int x:v1)
    {
        cout<<x<<" ";
    }
    
    return 0;
}