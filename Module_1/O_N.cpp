#include<bits/stdc++.h>
using namespace std;
int main()
//O(N) complexity
{
    int n,sum=0;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i <n; i++)
    {
        sum+=a[i];
    }
    cout<<sum;
    
    
    return 0;
}