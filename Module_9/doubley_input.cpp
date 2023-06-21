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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode=new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->prev=tail;
    tail->next=newNode;
    tail=newNode;
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    print_orginal(head);
    print_reverse(tail);
    return 0;
}