// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the Binary Tree node structure
    
//     template <typename T>
//     class TreeNode {
//         public :
//         T data;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }

//         ~TreeNode() {
//             if(left)
//                 delete left;
//             if(right)
//                 delete right;
//         }
//     };

// ************************************************************/
// void InorderTra(TreeNode<int>* root, vector<int> &in){
//     if(root==NULL){
//         return ;
//     }
//     InorderTra(root->left, in);
//     in.push_back(root->data);
//     InorderTra(root->right, in);

// }

// TreeNode<int>* flatten(TreeNode<int>* root)
// {
//     	//Write your code here
//     vector<int> inorder;
//     InorderTra(root, inorder);
//     int len = inorder.size();

//     TreeNode<int>* newNode =new TreeNode<int> (inorder[0]);
//     TreeNode<int>* curr = newNode;
    
//     for(int i=0; i<len; i++){
//          TreeNode<int>* temp = new  TreeNode<int>(inorder[i]);
//          curr->left = NULL;
//          curr->right = temp;
//          curr = temp;   
//     }

//     curr->left = NULL;
//     curr->right = NULL;
//     return newNode;

// }
