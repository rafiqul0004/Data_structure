#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>st(5);
    // list<int>st2={1,2,3,4,5,6};
    int a[11]={1,2,3,4,5,6,7,8,9,10,11};
    list<int>st(a,a+11);
    cout<<st.size()<<endl;
    // for (auto it = st.begin(); it!=st.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }
    
    for(int val:st)
    {
        cout<<val<<endl;
    }
    return 0;
}