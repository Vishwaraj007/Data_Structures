// this code is to represent the tree using an array....!
//  for this we use formula [  2n+1  ]...
// if we have n number of nodes then we required 2n+1 sized array to store all the element of binary tree.
// this spaces also consider the blank space of tree which is the null nodes as the child of any node.
// -- Vishwaraj Joshi.
#include <iostream>
#include <vector>
using namespace std;

struct node
{
    int data;
    node *left_node = NULL;
    node *right_node = NULL;
};

class Tree
{
public:
    node *root = NULL;
    vector<int> array;
    
    Tree(int n)
    {
        array.resize((2*n)+1,-1);                          // to resize the array vector with size n and initialize each value to -1..
       array[0] = n;
        for (int i = 0; i < n; i++)
        {
            int data;
            cout << "\nenter the data : ";
            cin >> data;
            create_node(data, root,1);
        }
    }
    void create_node(int data, node *&root,int idx)
    {
        node *temp;
        temp = new node();
        temp->data = data;
        temp->left_node = NULL;
        temp->right_node = NULL;
        if (root == nullptr)
        {
            array[idx] = temp->data;
            root = temp;
        }
        else if (root->data <= temp->data)
        {
            create_node(data, root->right_node, (idx*2)+1);
        }
        else
        {
            create_node(data, root->left_node, (idx*2));
        }
        cout << "Node is created...!";
    }

    void print_tree(node *root)
    {
        if (root != nullptr)
        {
            print_tree(root->left_node);
            cout << root->data<<" ";
            print_tree(root->right_node);
        }
    }

    void print_array() {
        cout << "\nArray Representation: ";
        for (int i = 1; i < array.size(); i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "\n\nEnter the number of node in the tree : ";
    cin >> n;
    Tree tree(n);
    cout<<"\n\nInorder : ";
    tree.print_tree(tree.root);

    tree.print_array();
    return 0;
}
