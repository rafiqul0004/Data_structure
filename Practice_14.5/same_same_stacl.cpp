#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st1;
    myStack st2;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }
    if (m == n)
    {
        if (st1.top() != st2.top())
        {
            cout << "NO" << endl;
            return 0;
        }
        st1.pop();
        st2.pop();
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;

    return 0;
}