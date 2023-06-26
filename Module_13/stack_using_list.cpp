#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        list<int> li;
        void push(int val)
        {
            li.push_back(val);
        }
        void pop()
        {
            li.pop_back();
        }
        int top()
        {
            return li.back();
        }
        int size()
        {
            return li.size();
        }
        bool empty()
        {
            if(li.size()==0) return true;
            else return false;
        }

};
int main()
{
    myStack st;
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}