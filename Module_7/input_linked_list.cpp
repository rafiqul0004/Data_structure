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
void insert_in_tail(Node *&head, Node *&tail,int val)
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
    Node *tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    
}
// void reverse_print_list(Node *n)
// {
//     reverse_print_list(n->next);
//     cout<<n->val<<" ";
// }
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_in_tail(head,tail,val);
    }
    // reverse_print_list(head);
    cout<<endl;
    print_linked_list(head);
    
    return 0;
}