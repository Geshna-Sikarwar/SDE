vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector<int> ans;
    if (root == nullptr)
        return ans;

    queue<pair<BinaryTreeNode<int>*, int>> q;
    q.push({root, 0});
    
    int level = 0; // Declare the level variable outside the while loop

    while (!q.empty())
    {
        int n = q.size();
        vector<int> temp;

        for (int i = 0; i < n; i++)
        {
            BinaryTreeNode<int>* node = q.front().first;
            level = q.front().second; // Update the level variable
            q.pop();

            temp.push_back(node->data);

            if (node->left)
                q.push({node->left, level + 1});
            if (node->right)
                q.push({node->right, level + 1});
        }

        if (level % 2 == 0)
        {
            ans.insert(ans.end(), temp.begin(), temp.end());
        }
        else
        {
            ans.insert(ans.end(), temp.rbegin(), temp.rend());
        }
    }

    return ans;
}

