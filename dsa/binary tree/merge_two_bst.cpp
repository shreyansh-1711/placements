// #include <bits/stdc++.h> 
// /*************************************************************
    
//     Following is the Binary Tree node structure:

//     class TreeNode{

//         public :
//             int data;
//             TreeNode *left;
//             TreeNode *right;

//             TreeNode(int data) {
//                 this -> data = data;
//                 left = NULL;
//                 right = NULL;
//             }

//             ~TreeNode() {
//             if (left){
//             delete left;
//             }

//             if (right){
//             delete right;
//             }
//         }   
//     };

// *************************************************************/
// void inorder(TreeNode<int> * root, vector<int>& in){
//     if(root==NULL) return ;
//     inorder(root->left, in);
//     in.push_back(root->data);
//     inorder(root->right, in);
// }
// // vector<int> merge(vector<int> nums1,  vector<int> nums2){
// //     int i=nums1.size(), j=nums2.size();
// //     vector<int> ans;
// //     if(i==0){
// //         return nums2;
// //     }
// //     if(j==0){
// //         return nums1;
// //     }

// //     while(i>=0 && j>=0){
// //         if(nums1[i]>nums2[i]){
// //             ans.push_back(nums1[i]);
// //             i--;
// //         }else{
// //             ans.push_back(nums2[j]);
// //             j--;
// //         }
// //     }
// //     while(i>=0){
// //        ans.push_back(nums1[i]);
// //         i--;
// //     }
// //     while(j>=0){
// //         ans.push_back(nums2[j]);
// //         j--;
// //     }
// //     reverse(ans.begin(), ans.end());
// //     return ans;
    
// // }
// vector<int> merge(vector<int> v1, vector<int> v2){

//     int n = v1.size();

//     int m = v2.size();

//     if(n==0){
//         return v2;
//     }
//     if(m==0){
//         return v1;
//     }
//     vector<int> v3 ;
//     int i=0,j=0;
//     while(i<n && j<m){
//         if(v1[i] < v2[j]){
//             v3.push_back(v1[i]);
//             i++;
//         }
//         else{
//             v3.push_back(v2[j]);
//             j++;
//         }
//     }

//     while(i<n){
//         v3.push_back(v1[i]);
//         i++;
//     }
//     while(j<m){
//         v3.push_back(v2[j]);
//         j++;
//     }
//     return v3;
// }

// TreeNode<int> * inorderBST(int s, int e, vector<int>& in){
//     if(s>e) return NULL;
//     int mid = (s+e)/2;
//     TreeNode<int>* root = new TreeNode<int> (in[mid]);
//     root->left = inorderBST(s, mid-1, in);
//     root->right = inorderBST(mid+1,e,in);
//     return root;
// }

// TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
//     // Write your code here.



//      vector<int> v1,v2;

//     inorder(root1,v1);
//     inorder(root2,v2);


//     vector<int> ans = merge(v1,v2);

//     TreeNode<int> * root = inorderBST(0, ans.size()-1, ans);
//     return root;


// }



