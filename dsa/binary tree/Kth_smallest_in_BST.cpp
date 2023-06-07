// class Solution {
// public:
//     void preOrderTraversal(TreeNode* root, vector<int> &v){
//         if(root == NULL)    return;
        
//         //root, left, right 
//         v.push_back(root->val);
//         preOrderTraversal(root->left, v);
//         preOrderTraversal(root->right, v);      
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> v; 
//         preOrderTraversal(root, v);
//         sort(v.begin(), v.end());
//         return v[k-1];
//     }
// };


// approach-2
// class Solution {
// public:
//     void inOrderTraversal(TreeNode* root, vector<int> &v){
//         if(root == NULL)    return;
        
//         //left, root, right 
//         inOrderTraversal(root->left, v);
//         v.push_back(root->val);
//         inOrderTraversal(root->right, v);      
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> v; 
//         inOrderTraversal(root, v);
//         return v[k-1];
//     }
// };


// approach-3
// class Solution {
// public:
//     void solve(TreeNode* root, int &cnt, int &ans, int k){
//         if(root == NULL)    return;
//         //left, root, right 
//         solve(root->left, cnt, ans, k);
//         cnt++;
//         if(cnt == k){
//             ans = root->val;
//             return;
//         }
//         solve(root->right, cnt, ans, k);
//     }
//     int kthSmallest(TreeNode* root, int k) {
        
//         int cnt = 0;        
//         int ans;
//         solve(root, cnt, ans, k);
//         return ans;
//     }
// };
