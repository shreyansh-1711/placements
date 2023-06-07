// #include <bits/stdc++.h> 
// /*************************************************************
 
//     Following is the Binary Tree node structure

//     class BinaryTreeNode 
//     {
//     public : 
//         T data;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }
//     };

// *************************************************************/
// void inorder(BinaryTreeNode<int> *root, vector<int>& ans){
//     if(root==NULL){return;}
//     inorder(root->left, ans);
//     ans.push_back(root->data);
//     inorder(root->right, ans);
// }
// bool validateBST(BinaryTreeNode<int> *root) {
//     // Write your code here
//     vector<int> ans;
//     inorder(root, ans);
//     if(is_sorted(ans.begin(), ans.end())){
//         return true;
//     }else{
//         return false;
//     }
// }




// approach 2
// class Solution {
// public:
//     bool isValidBST(TreeNode* root) {
//         return fun(root, NULL, NULL);
//     }
    
//     bool fun(TreeNode* root, TreeNode* max, TreeNode* min){
//         if(root==NULL){
//             return true;
//         }
// 		// Using the same above logic
// 		//Just check if max or min-node is NULL, then follow it as true
//         if((min==NULL || root->val > min->val) && (max==NULL || root->val < max->val)){
//             return fun(root->left, root, min) && fun(root->right, max, root);
//         }
//         return false;
//     }
// };