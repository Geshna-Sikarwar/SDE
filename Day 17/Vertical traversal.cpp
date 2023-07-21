#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root) {
    vector<int> ans;
    map<int, vector<int>> m;
    if (root == nullptr)
        return ans;
    queue<pair<TreeNode<int>*, int>> q;
    q.push({root, 0});
    while (!q.empty()) {
        auto it = q.front();
        q.pop();
        TreeNode<int>* node = it.first;
        int level = it.second;
        m[level].push_back(node->data);
        if (node->left)
            q.push({node->left, level - 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    for (auto it : m) {
        for (auto i : it.second)
            ans.push_back(i);
    }
    return ans;
}

