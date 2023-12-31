int mx = INT_MIN;

void dfs(BinaryTreeNode<int> *root){

    if(root == NULL || root->data == -1){

        return;

    }

    mx = max(mx, root->data);

    dfs(root->right);

    dfs(root->left);

}

int edit(BinaryTreeNode<int> *root){

    if(root == NULL){

        return 0;

    }

    if(root->left==NULL && root->right ==NULL){

        root->data = mx;

        return(mx);

    }

    else{

        root->data = edit(root->right) + edit(root->left);

        return (root->data);

    }

}

void changeTree(BinaryTreeNode < int > * root) {

    dfs(root);

    int a = edit(root);

}  
