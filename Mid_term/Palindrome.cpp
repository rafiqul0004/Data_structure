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
void reverse(Node *&head2,Node *c)
{
    if(c->next==NULL)
    {
        head2=c;
        return;
    }
    reverse(head2,c->next);
    c->next->next=c;
    c->next=NULL;
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
    Node *head2=NULL;
    Node *tail2=NULL;
    Node *tmp=head;
    while (tmp!=NULL)
    {
        insert_at_tail(head2,tail2,tmp->val);
        tmp=tmp->next;
    }
    reverse(head2,head2);
    tmp=head;
    Node *tmp2=head2;
    int p=1;
    while (tmp!=NULL)
    {
        if(tmp->val!=tmp2->val)
        {
            p=0;
            break;
        }
        tmp=tmp->next;
        tmp2=tmp2->next;
    }
    if(p==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}