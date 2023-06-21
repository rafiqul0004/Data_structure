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
int size_list(Node *&head)
{
    int c=0;
    Node *tmp=head;
    while (tmp!=NULL)
    {
        c++;
        tmp=tmp->next;
    }
    return c;
    
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
    for (Node * i = head; i->next!=NULL; i=i->next)
    {
        for (Node *j = i->next; j!=NULL; j=j->next)
        {
            if(i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }
        
    }
    int sz=size_list(head);
    int mid=(sz+1)/2;
    Node *tmp=head;
    for (int i = 0; i <mid-1; i++)
    {
        tmp=tmp->next;
    }
    if(sz%2==0)
    {
    cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    else cout<<tmp->val<<endl;
    
    return 0;
}