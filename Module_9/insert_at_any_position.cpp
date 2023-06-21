#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
        Node *prev;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
void print_orginal(Node *head)
{
    Node *tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    
}
void print_reverse(Node *tail)
{
    Node *tmp=tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
    
}
void insert_at_position(Node *head,int pos,int val)
{
    Node *newNode=new Node(val);
    Node *tmp=head;
    for (int i = 1; i <pos-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
}
int size_linked_list(Node *head)
{
    int c=0;
    Node *tmp=head;
    while (tmp!=NULL)
    {
        tmp=tmp->next;
        c++;
    }
    return c;
    
}
int main()
{
    Node *head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *c=new Node(40);
    Node *tail=c;
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    int pos;
    cin>>pos;
    int val;
    cin>>val;
    int size=size_linked_list(head);
    if (pos>=size)
    {
        cout<<"Invalid"<<endl;
    }
    else{
          insert_at_position(head,pos,val);
    }
    print_orginal(head);
    print_reverse(tail);
    return 0;
}