#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,2,3,4,2,2,4,6,2,7,2,8};
    replace(v.begin()+2,v.end(),2,5);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}