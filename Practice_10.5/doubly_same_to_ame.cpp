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
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head1, tail1, val);
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head2, tail2, val);
    }
    int c = 1;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
        {
            c = 0;
            break;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    if (c == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}