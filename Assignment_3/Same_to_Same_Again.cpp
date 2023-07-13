#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
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
        if (r.size() == 0)
            return true;
        else
            return false;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myQueue q;
    myStack st;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    if (m == n)
    {
        for (int i = 0; i < n; i++)
        {
            if (st.top() != q.front())
            {
                cout << "NO" << endl;
                return 0;
            }
            st.pop();
            q.pop();
        }
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}