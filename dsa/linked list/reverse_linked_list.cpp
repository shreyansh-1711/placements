/* TOPIC:  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;

// Itertive and Recursive



class Solution
{
    private:
        
    void reverse(Node* &head, Node* &curr, Node* &prev){    
    //base case
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward =  curr->next;
    reverse(head,forward, curr);
    curr->next = prev;
    
}
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        
        Node* prev = NULL;
        Node* curr = head;
        reverse(head, curr, prev);
        return head;
        
        // if(head==NULL || head->next==NULL){
        //     return head;
        // }
        
        // Node* prev = NULL;
        // Node* curr = head;
        // Node* forward = NULL;
        
        // while(curr != NULL){
        //     forward = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = forward;
            
        // }
        // return prev;
        
        
    }
    
};


int main() {

    

    return 0;
}