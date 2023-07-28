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
void find_max(Node *root, int &max)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        if (root->val > max)
            max = root->val;
    }
    find_max(root->left, max);
    find_max(root->right, max);
}
void find_min(Node *root, int &min)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        if (root->val < min)
            min = root->val;
    }
    find_min(root->left, min);
    find_min(root->right, min);
}
int main()
{
    Node *root = input_level();
    int max = INT_MIN;
    int min = INT_MAX;
    find_max(root, max);
    find_min(root, min);
    cout << max << " " << min << endl;
    return 0;
}