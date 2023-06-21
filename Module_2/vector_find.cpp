#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,2,3,4,2,2,4,6,2,7,2,8};
    auto it=find(v.begin(),v.end(),4);
    if(it==v.end()) cout<<"No";
    else cout<<"Yes";
    return 0;
}