#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_level()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *mLeft;
        Node *mRight;
        if (l == -1)
            mLeft = NULL;
        else
            mLeft = new Node(l);
        if (r == -1)
            mRight = NULL;
        else
            mRight = new Node(r);
        p->left = mLeft;
        p->right = mRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void insert(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL)
            root->left = new Node(x);
        else
            insert(root->left, x);
    }
    if (x > root->val)
    {
        if (root->right == NULL)
            root->right = new Node(x);
        else
            insert(root->right, x);
    }
}
void level_order(Node *root)
{
    if (root == NULL)
        cout << "Invalid";
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
        // if (f->right)
        //     q.push(f->right);
        // if (f->left)
        //     q.push(f->left);
    }
}
int main()
{
    Node *root = input_level();
    int x;
    cin >> x;
    insert(root, x);
    level_order(root);
    return 0;
}