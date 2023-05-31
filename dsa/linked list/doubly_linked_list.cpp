
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node() {
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << value << endl;
    }
};

void insertAtHead(Node* &head, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        return;
    }

    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &head, int d){
    Node* temp = new Node(d);
    if(head == NULL){
        head = temp;
        head->prev = NULL;
        head->next = NULL;
        return;
    }
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }

    tail->next = temp;
    temp->prev = tail;
    temp->next = NULL;
}

void insertAtPosition(Node* &head, int position, int d){
    if(position == 0){
        insertAtHead(head, d);
        return;
    }
    Node* temp = new Node(d);
    Node* ptr = head;
    for(int i = 0; i < position - 1; i++){
        ptr = ptr->next;
    }

    if(ptr->next == NULL){
        insertAtTail(head, d);
        return;
    }

    
    temp->next = ptr->next;
    temp->prev = ptr;
    ptr->next = temp;
    temp->next->prev = temp; 

}

void deletePosition(int position, Node* &head){
    if(position == 1){
        Node * temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next=NULL;
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

        current->prev = NULL;
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}


void Traverse(Node* &head){
    Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
}

int getLength(Node* &head){
    Node* temp = head;
    int len=0;
        while(temp != NULL){
            // cout << temp->data << " ";
            len++;
            temp = temp->next;
        }
        return len;
}

int main() {

    // Node* node1 = new Node(10);
    Node* head  = NULL;

    Traverse(head);

    cout << getLength(head) << endl;

    insertAtHead(head, 2);
    Traverse(head);

    insertAtTail(head, 25);
    Traverse(head);

    insertAtTail(head, 35);
    Traverse(head);

    insertAtPosition(head, 3, 70);
    Traverse(head);

    deletePosition(1, head);
    Traverse(head);

    deletePosition(2, head);
    Traverse(head);

    deletePosition(2, head);
    Traverse(head);






    

    return 0;
}