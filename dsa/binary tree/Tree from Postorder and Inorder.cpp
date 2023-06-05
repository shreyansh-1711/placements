// #include <bits/stdc++.h>
// using namespace std;

// int findposition(int in[],int element,int start,int end)
//     {
//         for(int i=start;i<=end;i++)
//         {
//             if(in[i]==element)
//             return i;
//         }
//         return -1;
//     }
//     Node* solve(int in[],int post[],int &index,int inorderstart,int inorderend,int n)
//     {
//         if(index < 0|| inorderstart >inorderend){
//             return NULL;
//         }
        
//         int element = post[index--];
//         Node* root = new Node(element);
//         int position = findposition(in,element,inorderstart,inorderend);
        
        
//         root->right=solve(in,post,index,position+1,inorderend,n);
//         root->left=solve(in,post,index,inorderstart,position-1,n);
        
//         return root;
//     }
    
// Node *buildTree(int in[], int post[], int n) {
//     // Your code here
//      // Code here
//         int postOrderindex = n-1;
//         Node* ans = solve(in, post, postOrderindex, 0, n-1, n);
//         return ans;
// }

// int main() {

    

//     return 0;
// }