#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e,a;
    cin>>e;
    while (e--)
    {
        int dora=1;
        cin>>a;
        int r[a];
        for (int i = 0; i <a; i++)
        {
            cin>>r[i];
        }
        for (int i = 1; i <a; i++)
        {
            if(r[i]<r[i-1])
            {
                dora=0;
                break;
            }
        }
        if(dora==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
        
        
    }
    
    return 0;
}