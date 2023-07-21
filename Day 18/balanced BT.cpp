#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
int find(BinaryTreeNode<int>* root,int &maxi)
{
    if(root==NULL)
    return 0;
    int l=find(root->left,maxi);
    int r=find(root->right,maxi);
    maxi=max(maxi,abs(l-r));
    return 1+max(l,r);
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    if(root==NULL)
    return true;
    int maxi=0;
    find(root,maxi);
    if(maxi>1)
    return false;
    else
    return true;
}
