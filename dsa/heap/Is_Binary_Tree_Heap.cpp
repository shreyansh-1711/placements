// class Solution {
//   public:
//      void total(Node* temp, int &count)
//     {
//         if(temp==NULL)
//         {
//             return ;
//         }
        
//         total(temp->left, count);
//         count++;
//         total(temp->right, count);
//     }
    
//     bool CBT(Node* tree, int i, int count)
//     {
//         if(tree==NULL) return true;
        
//         if(i>=count) return false;
        
//         return CBT(tree->left, 2*i+1, count)&&CBT(tree->right, 2*i+2, count);
//     }
    
//     bool isMax_order(Node* tree)
//     {
//         if(tree==NULL ) return true;
        
        
//         bool l=true;
//         if(tree->left)
//         {
//             if(tree->data >= tree->left->data)
//             {
//                 l=isMax_order(tree->left);
//             }
//             else
//             {
//                 l=false;
//             }
//         }
        
//         bool r=true;
        
//         if(tree->right)
//         {
//             if(tree->data >= tree->right->data)
//             {
//                 r=isMax_order(tree->right);
//             }
//             else
//             {
//                 r=false;
//             }
//         }
        
//         return r&&l;
//     }
//     bool isHeap(struct Node* tree) {
        
//         int count=0;
//         Node* temp=tree;
        
//         total(temp, count);
        
        
        
        
//         return CBT(tree,0,count)&&isMax_order(tree);
//         // code here
//     }
// };