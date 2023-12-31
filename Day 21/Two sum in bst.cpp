#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public: 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
void inorder(BinaryTreeNode<int> *root, vector<int>&v){

    if(!root) return ;

    inorder(root->left,v);

    v.push_back(root->data);

    inorder(root->right,v);

}

bool find(vector<int>v, int k){

    int s=0;

    int e=v.size()-1;

    while(s<e){

        if(k == v[s]+v[e]){

            return true;

        }

        else if(k > v[s]+v[e]){

            s++;

        }

        else if(k < v[s]+v[e]){

            e--;

        }

 

    }

    return false;

}

bool pairSumBst(BinaryTreeNode<int> *root, int k){

    vector<int>v;

    inorder(root,v);

    vector<int>ans=v;

   if( find(ans,k)){

       return true;

   }

   else{

       return false;

   }

}
