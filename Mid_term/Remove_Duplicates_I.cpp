#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode=new Node(val);
    while (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp =head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    
}
void remove_duplicate(Node *&head)
{
    if(head == NULL) return;
    Node *tmp =head;
    while (tmp->next!=NULL)
    {
        if (tmp->val==tmp->next->val)
        {
            tmp->next=tmp->next->next;
        }
        if (tmp->next==NULL) break;
        else if(tmp->val!=tmp->next->val)
        {
            tmp=tmp->next;
        }
    }
}
void sorting(Node *&head)
{
        for (Node * i = head; i->next!=NULL; i=i->next)
    {
        for (Node *j = i->next; j!=NULL; j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
        
    }
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    // for (Node * i = head; i->next!=NULL; i=i->next)
    // {
    //     for (Node *j = i->next; j!=NULL; j=j->next)
    //     {
    //         if(i->val>j->val)
    //         {
    //             swap(i->val,j->val);
    //         }
    //     }
        
    // }
    sorting(head);
    remove_duplicate(head);
    print_linked_list(head);
}