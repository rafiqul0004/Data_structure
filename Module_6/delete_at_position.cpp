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
 void insert_at_tail(Node *&head,int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp=head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
    cout<<"Inserted"<<endl;
    
}
void print_linked_list(Node *head)
{
    cout<<"Your Linked List  ";
    Node *tmp =head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    
}
void insert_at_positio(Node *&head,int pos,int val)
{
    Node *newNode = new Node(val);
    Node *tmp= head;
    for (int i = 1; i <=pos-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<"Inserted at position"<<endl;
    
}
void insert_at_head(Node *&head,int val)
{
    Node *newNode = new Node(val);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"Inserted"<<endl;
}
void delete_at_position(Node *head,int pos)
{
    Node *tmp=head;
    for (int i = 1; i <=pos-1; i++)
    {
        tmp=tmp->next;
    }
    Node *deleteNode =tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    
}
int main()
{
    Node *head=NULL;
    while (true)
    {
        cout<<"Option 1: Insert at tail"<<endl;
        cout<<"Option 2: Print Linked List"<<endl;
        cout<<"Option 3: Insert at position"<<endl;
        cout<<"Option 4: Insert at head"<<endl;
        cout<<"Option 5: Delete at position"<<endl;
        cout<<"Option 6: Terminate"<<endl;
        int op;
        cin>>op;
        if (op==1)
        {
            cout<<"Please Enter a Value"<<endl;
            int val;
            cin>>val;
            insert_at_tail(head,val);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            cout<<"Enter a position"<<endl;
            int pos,val;
            cin>>pos;
            cout<<"Enter the value"<<endl;
            cin>>val;

            if(pos==0)
            {
                insert_at_head(head,val);

            }
            else{
            insert_at_positio(head,pos,val);
            }
        }
        else if(op==4)
        {
            cout<<"Enter a value";
            int val;
            cin>>val;
            insert_at_head(head,val);
        }
        else if(op==5)
        {
            cout<<"Enter a position"<<endl;
            int pos;
            cin>>pos;
            delete_at_position(head,pos);
        }
        else if(op==6)
        {
            break;
        }
        

    }
    
    
    return 0;
}