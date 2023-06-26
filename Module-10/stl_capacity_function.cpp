#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>st={1,2,3,4,5,6};
    cout<<st.size()<<endl;
    // cout<<st.max_size()<<endl;
    // st.resize(10);
    // st.resize(4);
    st.resize(10,12);
    for (int v:st)
    {
        cout<<v<<" ";
    }
    
    return 0;
}