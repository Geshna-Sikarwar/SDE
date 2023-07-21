#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/


void find(TreeNode<int> *root,int level,vector<int>&ans)
{
    if(root==NULL)
    return;
      //queue<TreeNode *> q;
      if (level == ans.size())
      ans.push_back(root->data);
      find(root->left, level + 1, ans);
      find(root->right, level + 1, ans);
    
    //return queue;
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int>ans;
    find(root,0,ans);
    return ans;
}
