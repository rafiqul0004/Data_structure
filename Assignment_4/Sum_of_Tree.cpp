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
int sum_of_tree(Node *root)
{
    long long int sum = 0;
    if (root == NULL)
        return 0;
    sum = (root->val + sum_of_tree(root->left) + sum_of_tree(root->right));

    return sum;
}
int main()
{
    long long int sum = 0;
    Node *root = input_level();
    sum = sum_of_tree(root);
    cout << sum << endl;
    return 0;
}