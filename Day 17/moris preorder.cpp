#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    TreeNode *curr=root;
    vector<int>ans;
    while(curr!=NULL)
    {
      if (curr->left == NULL) {
        ans.push_back(curr->data);
        curr = curr->right;
      }
      else{
         TreeNode *prev=curr->left;
         while(prev->right and prev->right!=curr)
         prev=prev->right;
         if (prev->right == NULL) {
           prev->right = curr;
           ans.push_back(curr->data);
           curr = curr->left;
         }
          else {
              prev->right=NULL;
              
              curr=curr->right;
         }
      }
      
    }
    return ans;
}
