
// void inorder(TreeNode<int>* root, vector<int> &in){
//     if(root==NULL){
//         return ;
//     }
//     inorder(root->left, in);
//     in.push_back(root->data);
//     inorder(root->right, in);

// }
// TreeNode<int>* inordertoBST(int s, int e,vector<int> &in ){
//     if(s>e){
//         return NULL;
//     }

//     int mid = (s+e)/2;
//     TreeNode<int>* root = new TreeNode<int>(in[mid]);
//     root->left = inordertoBST(s, mid-1, in);
//     root->right = inordertoBST(mid+1,e,in);
//     return root;

// }



// TreeNode<int>* balancedBst(TreeNode<int>* root) {
//     // Write your code here.
//     vector<int> inorderval;
//     inorder(root, inorderval);

//     return inordertoBST(0,inorderval.size()-1, inorderval);


// }
