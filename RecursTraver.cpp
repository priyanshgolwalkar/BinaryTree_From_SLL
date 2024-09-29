// Creation of Binary Tree from SLL code

#include<iostream>
using namespace std;

class node
{

public:
       int data;
       node *left,*right;
       node(int x)
       {
        data=x;
        left=right=NULL;

       }
};

node *create()
{
    node*root;
    int x;
    cout<<"\nEnter A data to create a node or press 0 to stop :"<<endl;
    cin>>x;
        if(x==0)
        return NULL;
    
    root = new node(x);
    cout<<"\nEnter left of"<<x;
    root->left=create();
    cout<<"\nEnter right of"<<x;
    root->right=create();

    return root;

}

void Inorder(node*root)
{
    if(root!=NULL)
    {
         
         Inorder(root->left);
         cout<<"\t"<<root->data;
         Inorder(root->right);
         

    }
}

void Preorder(node*root)
{
    if(root!=NULL)
    {
         cout<<"\t"<<root->data;
         Preorder(root->left);
         Preorder(root->right);
         

    }
}

void postorder(node*root)
{
    if(root!=NULL)
    {
         
         postorder(root->left);
         postorder(root->right);
         cout<<"\t"<<root->data;

    }
}


int main()
{
    node *root=create();
    cout<<"\nPreorder Traversal of the tree is :"<<endl;
    Preorder(root);
    cout<<"\nInorder Traversal of the tree is :"<<endl;
    Inorder(root);
    cout<<"\nPostorder Traversal of the tree is :"<<endl;
    postorder(root);

}