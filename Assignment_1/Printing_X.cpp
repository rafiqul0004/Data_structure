#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    // int d[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <r; j++)
        {
            if (i==j && i+j==r-1)
            {
               cout<<"X";
            }
            
            if (i==j && i+j!=r-1)
            {
                cout<<"\\";
            }
            else if (i+j==r-1 && i!=j)
            {
                cout<<"/";
            }
            if (i!=j && i+j!=r-1)
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    }
    return 0;
}