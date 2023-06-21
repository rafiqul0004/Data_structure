#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    vector<int> r1(a);
    for (int i = 0; i <a; i++)
    {
        cin>>r1[i];
    }
    cin>>b;
    vector<int> r2(b);
    for (int i = 0; i <b; i++)
    {
        cin>>r2[i];
    }
    cin>>c;
    r1.insert(r1.begin()+c,r2.begin(),r2.end());
    for (int x:r1)
    {
        cout<<x<<" ";
    }
    
    
    return 0;
}