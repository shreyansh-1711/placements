// TC - O(N)
// SC - O(N)

// #include <bits/stdc++.h> 
// /*
//     Following is the class structure of BinaryTreeNode class for referance:

//     class BinaryTreeNode {
//        public : 
//         T data;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }

//         ~BinaryTreeNode() {
//             if (left){
//                 delete left;
//             }
//             if (right){
//                 delete right;
//             }
//         }
//     };
// */
// BinaryTreeNode<int>* build_preorder_range(vector<int> &preorder, int &index, int start = INT_MIN, int end = INT_MAX){
//     // Base Case
//     if((index >= preorder.size()) || (preorder[index] >= end) || (preorder[index] <= start)) return NULL;
//     BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[index]);
//     index++;
//     root->left = build_preorder_range(preorder, index, start, root->data);
//     root->right = build_preorder_range(preorder, index, root->data, end);

//     return root;
// }
 

// BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
//     int n = preorder.size();
//     int index = 0;
    
//     BinaryTreeNode<int>* root = build_preorder_range(preorder, index);
    
//     return root;
// }