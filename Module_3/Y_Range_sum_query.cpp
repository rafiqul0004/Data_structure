#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q;
    cin>>n>>q;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long p[n];
    p[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        p[i]=a[i]+p[i-1];
    }
    while (q--)
    {
        long long r,l;
        cin>>l>>r;
        l--;
        r--;
        long long sum=0;
        if(l==0) sum=p[r];
        else sum=p[r]-p[l-1];
        cout<<sum<<endl;
    }
    
    
    
    return 0;
}