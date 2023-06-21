#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
};
int main()
{
    Node a,b;
    a.val=12;
    b.val=24;
    a.next=&b;
    cout<<a.val<<endl;
    cout<<a.next->val<<endl;
    
    return 0;
}