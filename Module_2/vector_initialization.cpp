#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; type 1
    // vector<int>v(6); type 2
    // vector<int> v2(6,12); type 4
    // vector<int> v(v2); type 4
    // int a[5]={1,2,3,4,5}; type 5
    // vector<int>v(a,a+6); type 5
    vector<int>v={1,2,3,4,5};
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    return 0;
}