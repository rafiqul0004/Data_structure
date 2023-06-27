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
void insert_at_tail(Node *&head, Node *&tail,int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    tail->next=NULL;
}
int size_of_list(Node *head)
{
    Node *tmp=head;
    int c=0;
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
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    cout<<size_of_list(head)<<endl;
    return 0;
}