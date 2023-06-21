#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6};
    v.erase(v.begin()+2,v.begin()+5);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}