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
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
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
void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
int size_linked_list(Node *head)
{
    int c = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        c++;
    }
    return c;
}
void print_orginal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int r;
    cin >> r;
    while (r--)
    {
        int pos, val;
        cin >> pos >> val;
        int sz = size_linked_list(head);
        if (pos == 0)
        {
            insert_at_head(head, tail, val);
            print_orginal(head);
            print_reverse(tail);
        }
        else if (pos == sz)
        {
            insert_at_tail(head, tail, val);
            print_orginal(head);
            print_reverse(tail);
        }
        else if (pos > sz)
            cout << "Invalid" << endl;
        else
        {
            insert_at_position(head, pos, val);
            print_orginal(head);
            print_reverse(tail);
        }
    }

    return 0;
}