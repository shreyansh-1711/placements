#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    void traverse_Left(Node* root, vector<int>& ans){
        if(root==NULL || root->right==NULL && root->left==NULL){
            return;
        }
        ans.push_back(root->data);
        if(root->left){
            traverse_Left(root->left,ans);
        }else{
            traverse_Left(root->right, ans);
        }
    }
    
    void traverseLeaf(Node* root, vector<int>& ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
    }
    
    void traverseRight(Node* root, vector<int>& ans){
        if(root==NULL || root->right==NULL && root->left==NULL){
            return;
        }
        if(root->right){
            traverseRight(root->right, ans);
        }else{
            traverseRight(root->left, ans);
        }
        
        ans.push_back(root->data);
    }
    
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        ans.push_back(root->data);
        
        traverse_Left(root->left, ans);
        
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
        
        traverseRight(root->right, ans);
        
        return ans;
        
        
    }
};


int main() {

    

    return 0;
}