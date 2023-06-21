#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;
    //constructor
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node *&head, int v)
{
    Node *newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        cout<<endl<<endl<<"Inserted at head"<<endl;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    //now temp at laast  node
    temp->next=newNode;
    
}

void print_linked_list(Node *head)
{
    cout<<endl;
    cout<<"Your linked list: ";
    Node *temp =head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
    cout<<endl<<endl<<"Inserted at tail"<<endl;
}
void insert_at_position(Node *head,int pos,int v)
{
    Node *newNode=new Node(v);
    Node *temp=head;
    for(int i=1; i<=pos-1; i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<endl<<endl<<"Inserted at position"<<pos<<endl<<endl;
}
void insert_at_head(Node *&head,int v)
{
    Node *newNode=new Node(v);
    newNode->next=head;
    head = newNode;
    cout<<endl<<"inserted at head"<<endl<<endl;
}
void delete_from_position(Node *head,int pos)
{
    Node* temp=head;
    for(int i=1; i<=pos-1; i++)
    {
        temp=temp->next;
    }
    Node *deleteNode =temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}

int main()
{
    Node *head=NULL;
    while(true)
    {
        cout<<"option 1: Insert at tail"<<endl;
        cout<<"option 2: print linkd list"<<endl;
        cout<<"option 3: Inserted at any position"<<endl;
        cout<<"option 4:Insrt at head"<<endl;
        cout<<"option 5: Delete from position"<<endl;
        cout<<"option 6: Terminate"<<endl;

        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"please enter value: ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            int pos,v;
            cout<<"Enter position: ";
            cin>>pos;
            cout<<"Enter Value: ";
            cin>>v;
            if(pos==0)
            {
                insert_at_head(head,v);
            }
            else
            {
                insert_at_position(head,pos,v);
            }
        }
        else if(op==4)
        {
            int v;
            cout<<"Enter value: ";
            cin>>v;
            insert_at_head(head,v);
        }
        else if(op==5)
        {
            int pos;
            cout<<"Enter position: ";
            cin>>pos;
            delete_from_position(head,pos);
        }
    }
    
    return 0;
}