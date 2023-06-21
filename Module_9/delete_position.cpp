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
void delete_position(Node *&head,int pos)
{
    Node *tmp=head;
    for (int i = 1; i <=pos-1; i++)
    {
        tmp=tmp->next;
    }
    Node *deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;
    
}
void delete_head(Node *&head)
{
    Node *deleteNod=head;
    head=head->next;
    delete deleteNod;
    head->prev=NULL;
}
void delete_tail(Node *&tail)
{
    Node *deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    tail->next=NULL;
}
int main()
{
    // Node *head=NULL;
    // Node *tail=NULL;
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
    int size=size_linked_list(head);
    if(pos>=size)
    {
        cout<<"Invalid"<<endl;
    }
    else if(pos==0)
    {
        delete_head(head);
    }
    else if(pos==size)
    {
        delete_tail(tail);
    }
    else{
    delete_position(head,pos);
    }
    print_orginal(head);
    print_reverse(tail);
    return 0;
}