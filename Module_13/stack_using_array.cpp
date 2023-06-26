#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        vector<int> r;
        void push(int val)
        {
            r.push_back(val);
        }
        void pop()
        {
            r.pop_back();
        }
        int top()
        {
            return r.back();
        }
        int size()
        {
           return r.size();
        }
        bool empty()
        {
            if(r.size()==0) return true;
            else return false;
        }
};
int main()
{
    myStack st;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while (!st.empty())
    {
        
        cout<<st.top()<<endl;
        st.pop();
    }
    
    
    
    return 0;
}