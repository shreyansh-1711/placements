
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node * next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
    
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << value << endl;
    }

};

void  insertATHead(Node* &head, int d){
    Node * temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertATTail(Node* &tail, int d){
    Node * temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* & tail, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertATHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertATTail(tail,d);
        return ;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deletePosition(int position, Node* &head){
    if(position == 1){
        Node * temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node * current = head;
        Node * previous = NULL;
        int cnt = 1;
        while(cnt < position){
            previous = current;
            current = current->next;
            cnt++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}



void Traverse(Node* &head){
    Node* temp = head;
    while(temp != NULL){
            cout << temp->data << " -->";
            temp = temp->next;
        }
        cout << endl;
}


int main() {

    Node * node1 = new Node(10);
    // cout << node1->data << endl;

    Node* head = node1;
    Node* tail = node1;


    Traverse(head);
    insertATHead(head, 20);
    Traverse(head);
    insertATHead(head, 15);
    Traverse(head);

    insertATTail(tail, 50);
    Traverse(head);
    insertATTail(tail, 70);
    Traverse(head);

    insertAtPosition(head,tail,3,22);
    Traverse(head);

    insertAtPosition(head,tail,1,1);
    Traverse(head);

    insertAtPosition(head,tail,8,100);
    Traverse(head);

    deletePosition(4,head);
    Traverse(head);

    cout << head->data << endl;
    cout << tail->data << endl;


    

    return 0;
}