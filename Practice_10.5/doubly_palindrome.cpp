#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
void palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i < j)
    {
        if (i->val != j->val)
        {
            cout << "NO" << endl;
            return;
        }
        i = i->next;
        j = j->prev;
    }
    cout << "YES" << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    palindrome(head, tail);
    return 0;
}