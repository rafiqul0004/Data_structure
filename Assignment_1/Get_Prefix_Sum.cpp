#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r;
    cin>>r;
    long long int n[r],p[r];
    for (int i = 0; i < r; i++)
    {
        cin>>n[i];
    }
    p[0]=n[0];
    for (int i = 1; i <r; i++)
    {
        p[i]=p[i-1]+n[i];
    }
    for (int i = r-1; i>=0; i--)
    {
        cout<<p[i]<<" ";
    }
    
    return 0;
}