// void solve(BinaryTreeNode<int>* root,vector<int>& inorder){
//     if(root == NULL){
//         return;
//     }
//     solve(root->left,inorder);
//     inorder.push_back(root->data);
//     solve(root->right,inorder);
// }
// pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
// {
//     pair<int,int> ans(-1,-1);

//     if(root == NULL){
//         return ans;
//     }
//     vector<int> inorder;
//     solve(root,inorder);

//     for(int i=0;i<inorder.size();i++){
//         if(key == inorder[i]){
//             if(i-1>=0){
//                 ans.first =inorder[i-1];
//             }
//             if(i+1<inorder.size()){
//                 ans.second = inorder[i+1];
//             }
//         }
//     }
//     return ans;
// }

#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/

// pair<int, int> predecessorSuccessor(BinaryTreeNode<int> *root, int key)
// {
//     BinaryTreeNode<int> *temp = root;
//     int pred = -1;
//     int succ = -1;
//     while (temp->data != key)
//     {
//         if (temp->data > key)
//         {
//             succ = temp->data;
//             temp = temp->left;
//         }
//         else
//         {
//             pred = temp->data;
//             temp = temp->right;
//         }
//     }
//     //      FINDING PRED AND SUCC
//     //     PRED
//     BinaryTreeNode<int> *leftTree = temp->left;
//     while (leftTree != NULL)
//     {
//         pred = leftTree->data;
//         leftTree = leftTree->right;
//     }
//     //      SUCC
//     BinaryTreeNode<int> *rightTree = temp->right;
//     while (rightTree != NULL)
//     {
//         succ = rightTree->data;
//         rightTree = rightTree->left;
//     }
//     pair<int, int> ans = make_pair(pred, succ);
//     return ans;
// }
