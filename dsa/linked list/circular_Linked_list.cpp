#include <bits/stdc++.h>
using namespace std;

class Node {

    public:
    int data;
    Node * next;

    Node(int d){
        this-> data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout << value << endl;
    }

};

void insertNode(Node* &tail, int ele, int d){
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
        return ;
    }
    else{
        Node* curr = tail;
        while(curr ->data != ele){
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }
}

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

void Traverse(Node* tail){
    Node* temp = tail; 

    // cout << tail->data << " ";
   do{
    cout << tail->data << " ";
    tail = tail->next;
   }while(tail != temp);
   cout << endl;

}

int main() {

    Node* tail = NULL;

    insertNode(tail,5,3);
    Traverse(tail);

    insertNode(tail,3,8);
    Traverse(tail);



    

    return 0;
}