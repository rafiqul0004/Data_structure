#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>r;
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        int val;
        cin>>val;
        r.push(val);
    }
    while (!r.empty())
    {
        cout<<r.top()<<" ";
        r.pop();

    }
    
    
    return 0;
}