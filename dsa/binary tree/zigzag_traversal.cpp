// TC = O(n)
// SC = O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> ans;
    	if(root==NULL){
    	    return ans;
    	}
    	queue<Node*> q;
    	q.push(root);
    	
    	bool leftToright = true;
    	
    	while(!q.empty()){
    	    int size = q.size();
    	    vector<int> temp(size);
    	    for(int i=0;i<size;i++){
    	        Node* frontNode = q.front();
    	        q.pop();
    	        int index = leftToright ? i : size-i-1;
    	        temp[index] = frontNode->data;
    	        
    	        if(frontNode->left){
    	            q.push(frontNode->left);
    	        }
    	        if(frontNode->right){
    	            q.push(frontNode->right);
    	        }
    	        
    	    }
    	    leftToright = !leftToright;
    	    for(auto i : temp){
    	        ans.push_back(i);
    	    }
    	}
    	return ans;
    }
};


int main() {

    

    return 0;
}