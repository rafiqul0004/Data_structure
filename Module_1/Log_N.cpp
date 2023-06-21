#include<bits/stdc++.h>
using namespace std;
int main()
{
    //log(N) complexity
    int n;
    cin>>n;
    while (n>0)
    {
        int d=n%10;
        cout<<d<<endl;
        n=n/10;
    }
    
    return 0;
}