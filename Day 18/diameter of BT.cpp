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
int find(TreeNode<int> *root,int &maxi)
{
    if(root==NULL)
    return 0;
    //int maxi=0;
    int l=find(root->left,maxi);
    int r=find(root->right,maxi);
    maxi=max(maxi,l+r);
    return 1+max(l,r);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    int maxi=0;
    if(root==NULL)
    return maxi;
    find(root,maxi);
    return maxi;
}

