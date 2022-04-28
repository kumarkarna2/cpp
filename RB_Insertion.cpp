#include <bits/stdc++.h>
using namespace std;

enum color
{
    red,
    black
};

struct Node
{
    int data;
    bool color;
    // int color[2] = {"red", "black"};
    struct Node *root = NULL;
    struct Node *parent;
    struct Node *lc;
    struct Node *rc;
};

// create node for input data
Node *new_node(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->color = red;
    temp->lc = nullptr;
    temp->rc = nullptr;
}

// insert data in tree
Node *insert(Node *root, int data)
{
    Node *node = new_node(data);
    Node *y = NULL;
    Node *x = root;
    while (x != nullptr)
    {
        y = x;
        if (node->data < x->data)
        {
            x = x->lc;
        }
        else
        {
            x = x->rc;
        }
    }

    if (y == NULL)
    {
        y = node;
    }
    else if (node->data < y->data)
    {
        y->lc = node;
    }
    else
    {
        y->rc = node;
    }
    return y;
}

int main()
{

    return 0;
}