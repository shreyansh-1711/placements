#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node* root){
        if (root==NULL) return 0;
        int left = height(root->left);
        int right = height(root->right);
        int ans= max(left, right)+1;
        return ans;
    }
    int diameter(Node* root) {
        // Your code here
        if(root==NULL) return 0;
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left) + 1 + height(root->right);
        return max(op1, max(op2,op3));
        
    }
};


int main() {

    

    return 0;
}