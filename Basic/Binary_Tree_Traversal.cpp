#include<iostream>
using namespace std;

typedef struct Node{
    int data;
    Node *left_child = NULL;
    Node *Right_child = NULL; 
}Node;

void insert(Node *&root,Node *new_node)
{
    if(root != NULL)
    {
        if(root->data > new_node->data)
        {
           insert(root->left_child ,new_node);
        }
        else if(root->data <= new_node->data)
        {
            insert(root->Right_child,new_node);
        }
    }
    else{
        root = new_node;
    }
}



void inorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left_child);
        cout<<" "<<root->data;
        inorder(root->Right_child);
    }

}

void postorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left_child);
        inorder(root->Right_child);
        cout<<" "<<root->data;
    }

}

void preorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        cout<<" "<<root->data;
        inorder(root->left_child);
        inorder(root->Right_child);
    }

}

int main()
{
    Node *root = NULL;
    int n;
    cout<<"enter the number of nodes : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter value "<<i+1<<" : ";
        Node *temp;
        temp = new Node();
        cin>>temp->data;
        insert(root,temp);
    }

    cout<<"\nPreorder : ";
    preorder(root);
    cout<<"\nInorder : ";
    inorder(root);
    cout<<"\nPostorder : ";
    postorder(root);

    return 0;
}