#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *lc;
    struct node *rc;
};

node *nNode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->lc = nullptr;
    temp->rc = nullptr;
    return temp;
}

node *del(node *root, int key)
{
    
}

    node *insert(node *root, int key)
{

    node *Node = nNode(key);

    node *temp = root;
    node *pretemp;

    while (temp != NULL)
    {
        pretemp = temp;

        if (temp->data > key)
        {
            temp = temp->lc;
        }
        else
        {
            temp = temp->rc;
        }
    }

    if (pretemp == NULL)
    {
        pretemp = Node;
    }
    else if (pretemp->data > key)
    {
        pretemp->lc = Node;
    }
    else
    {
        pretemp->rc = Node;
    }
    return pretemp;
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    else
    {
        inorder(root->lc);
        cout << root->data << "\t";
        inorder(root->rc);
    }
}

int main()
{
    node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    inorder(root);

    return 0;
}