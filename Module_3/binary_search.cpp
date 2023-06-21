#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>x;
    bool flag=false;
    int l,r;
    l=0;
    r=n-1;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (a[mid]==x)
        {
            flag=true;
            break;
        }
        if (a[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }

        
    }
    if(flag==true) cout<<"Yes";
    else cout<<"No";
    
    
    return 0;
}