#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};
    vector<int>v2={1,2,3};
    v2.pop_back();
    v=v2;
    for (int x:v)
    {
        cout<<x<<" ";
    }
    
    return 0;
}