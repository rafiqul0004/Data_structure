#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r[n];
    for (int i = 0; i <n; i++)
    {
        cin>>r[i];
    }
    int c=0;
    for (int i = 0; i <n-1; i++)
    {
        for (int j = i+1; j <n; j++)
        {
         if(r[i]==r[j])
        {
            c=1;
            break;
        }
        }
        
    }
    if(c==1) cout<<"YES";
    else cout<<"NO";
    
    
    return 0;
}