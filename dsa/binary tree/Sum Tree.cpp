#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    pair<bool,int> isSumTreeFast(Node* root){
        if(root==NULL){
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        if(root->left==NULL && root->right==NULL){
            pair<bool,int> p = make_pair(true,root->data);
            return p;
        }
        
        pair<bool,int> right = isSumTreeFast(root->right);
        pair<bool,int> left = isSumTreeFast(root->left);
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool condition = root->data == left.second+right.second;
        pair<bool,int> ans;
        if(leftAns && rightAns && condition){
            ans.first = true;
            ans.second = 2*root->data ;
        }else{
            ans.first = false;
        }
        return ans;
        
        
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         return isSumTreeFast(root).first;
    }
};


int main() {

    

    return 0;
}