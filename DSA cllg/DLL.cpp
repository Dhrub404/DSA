#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

//Printing DLL
void print(Node* &head){

    //empty DLL
    if(head == NULL){
        cout << "Empty DLL" << endl;
        return;
    }

    Node* temp = head;

    do{
        cout << temp->data << " ";
        temp = temp->next;

    }while(temp != head);

    cout << endl;
}

//insert using jump no need of head and tail in this
void jumpInsert(Node* &root,int data){
    Node* newNode = new Node(data);

    //when DLL is empty
    if(root == NULL){
        root = newNode;

        //circular connection
        root->next = root;
        root->prev = root;
        return;
    }

    Node* temp = root->prev;


    //go till last node
    // while(temp->next != root){
    //     temp = temp->next;
    // }

    temp->next = newNode;
    newNode->prev = temp;

    newNode->next = root;
    root->prev = newNode;
}

//Inserting a node at the head of the Linked List
void insertAtHead(Node* &head ,Node* &tail ,int data){

    //when DLL is empty
    if(head == NULL){

        Node* newNode = new Node(data);

        head = newNode;
        tail = newNode;

        //circular connection
        head->next = head;
        head->prev = head;

        return;
    }

    //step1:
    Node* newNode = new Node(data);

    //step2:
    newNode->next = head;
    newNode->prev = tail;

    //step3:
    head->prev = newNode;
    tail->next = newNode;

    //step4:
    head = newNode;
}

//Inserting a node at the end of the LL
void insertAtTail(Node* &head ,Node* &tail , int  data){

    //when DLL is empty
    if(head == NULL){

        Node* newNode = new Node(data);

        head = newNode;
        tail = newNode;

        //circular connection
        head->next = head;
        head->prev = head;

        return;
    }

    //step1:
    Node* newNode = new Node(data);

    //step2:
    newNode->prev = tail;
    newNode->next = head;

    //step3:
    tail->next = newNode;
    head->prev = newNode;

    //step4:
    tail = newNode;
}

//FIND length of the linked list
int findLength(Node* head) {

    //empty DLL
    if(head == NULL){
        return 0;
    }

    int length = 0;
    Node* temp = head;

    do{
        length++;
        temp = temp->next;

    }while(temp != head);

    return length;
}

//INSERTING at a specific position
void insertAtPosition(int data ,int position ,Node* &head ,Node* &tail){

    //when DLL is empty
    if(head == NULL){

        Node* newNode = new Node(data);

        head = newNode;
        tail = newNode;

        head->next = head;
        head->prev = head;

        return;
    }

    //step 1 : find the position : find prev & curr
    if(position == 0){
        insertAtHead(head,tail,data);
        return;
    }

    int len = findLength(head);

    if(position >= len){
        insertAtTail(head,tail,data);
        return;
    }

    int i=1;
    Node* prevNode = head;

    while(i<position){
        prevNode = prevNode->next;
        i++;
    }

    Node* curr = prevNode->next;

    //step 2 : create a new node
    Node* newNode  = new Node(data);

    //step 3 : connections
    newNode->next = curr;
    newNode->prev = prevNode;

    prevNode->next = newNode;
    curr->prev = newNode;
}

//delete a node
void deleteNode(Node *&head, Node *&tail, int position){
    if(head == nullptr){
        cout << "Can not delete because ll is empty: " << endl;
        return;
    }

    if(position <= 0){
        cout << "can not delete at 0 because index is starting for 1: " << endl;
        return;
    }

    // delete the head
    if(position == 1){
        //single node DLL
        if(head == tail){
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }

        Node *temp = head;
        head = head->next;

        head->prev = tail;
        tail->next = head;

        temp->next = NULL;
        temp->prev = NULL;

        delete temp;
        return;
    }

    int len = findLength(head);

    // delete at end
    if (position == len){
        Node *temp = tail;
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;

        temp->next = NULL;
        temp->prev = NULL;

        delete temp;
        return;
    }

    // delete at position
    int i = 1;
    Node *prevNode = head;

    while (i < position - 1){
        prevNode = prevNode->next;
        i++;
    }

    Node *curr = prevNode->next;

    prevNode->next = curr->next;
    curr->next->prev = prevNode;

    curr->next = NULL;
    curr->prev = NULL;

    delete curr;
}

//get middle using slow fast pointer
int getMiddle(Node* head) {

    //empty DLL
    if(head == NULL){
        return -1;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast->next != head && fast->next->next != head) {

        // move the fast pointer by two nodes
        fast = fast->next->next;

        // move the slow pointer by one node
        slow = slow->next;
    }

    return slow->data;
}

//searching
bool search(Node* &head, int target){

    if(head == NULL){
        cout << "Empty list "<< endl;
        return false;
    }

    Node* temp = head;

    do{

        if(temp->data == target){
            return true;
        }

        temp = temp->next;

    }while(temp != head);

    return false;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    Node* root = NULL;

    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);

    jumpInsert(root,60);
    jumpInsert(root,70);
    jumpInsert(root,80);
    jumpInsert(root,90);

    // print(head);
    print(root);

    //searching
    cout << search(head,30) << endl;

    //middle
    cout << getMiddle(head) << endl;

    //delete
    deleteNode(head,tail,2);

    print(head);

    return 0;
}