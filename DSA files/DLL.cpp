#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    //need to study this destructor for both SLL & DLL
    ~Node(){
        cout << "Node with the value:" << this->data << endl;

        // Break links to avoid accidental recursive deletion
        this->next = nullptr;
        this->prev = nullptr;

        // // Delete ONLY in the forward direction
        // if (this->next != nullptr) {
        //     delete next;      // Recursively deletes the rest of the list
        //     this->next = nullptr;
        // }

        // // Break back-link so we don't accidentally go backward
        // this->prev = nullptr;
    }
};


//printing DLL
void print(Node* &head){
    Node* temp = head;
    while(temp !=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}


//Find Length
int getLength(Node* &head){
    int len=0;
    Node* temp = head;
    while(temp !=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}



void insertAtHead(Node* &head , Node* &tail , int data){
    //LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head  = newNode;
        tail = newNode ; 
        return;
    }

    //Non-Empty
    Node* newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}



void insertAtTail(Node* &head , Node* &tail , int data){
    //Empty LL
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return; 
    }

    //Non-Empty LL
    Node* newNode = new Node(data);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

//insertion at specific position
void insertAtPosition(Node* &head , Node* &tail , int data , int position){
    // Empty LL
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return; 
    }

    //Non-Empty LL
    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }

    int len = getLength(head);
    if(position>len){
        insertAtTail(head,tail,data);
        return;
    }

    int i=1;
    Node* prevNode = head;
    while(i < position-1){
        prevNode=prevNode->next;
        i++;
    }

    Node* curr = prevNode->next;

    Node* newNode = new Node(data);
    prevNode->next = newNode;
    newNode->prev = prevNode;
    curr->prev = newNode;
    newNode->next = curr;

    //OR other way to do without curr nnode
    // Node* newNode = new Node(data);
    // prevNode->next->prev = newNode;
    // newNode->next = prevNode->next;
    // prevNode->next = newNode;
    // newNode->prev = prevNode;

}



void deleteFromPos(Node* &head , Node* &tail , int data,int position){
    //Empty LL
    if(head == NULL){
        cout << "Linked List is Empty";
        return;
    }

    int len = getLength(head);
    if(position>len){
        cout << "Please enter a valid length";
        cout << endl;
        return;
    }

    //Single Node
    if(head->next == NULL){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    //If position = 1 delete head
    if(position==1){
        //wants to delete first node
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }

    //Delete tail
    if(position==len){
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp ;
        return;
    }

    //Delete at specific Position
    int i=1;
    Node* left = head;
    while(i<position-1){
        left = left->next;
        i++;
    }

    Node* curr = left->next;
    Node* right = curr->next;

    left->next = right;
    right->prev = left;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
    return;
}


int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    Node* head = first;
    Node* tail = third;

    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    print(first);
    cout << endl;

    insertAtHead(head , tail , 101);
    print(head);
    cout << endl;

    insertAtTail(head , tail , 40);
    print(head);
    cout << endl;

    insertAtPosition(head , tail , 25 , 3);
    print(head);
    cout << endl;

    deleteFromPos(head , tail , 25 , 4);
    print(head);
    cout << endl;


    return 0;
}

