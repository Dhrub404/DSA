#include<iostream>
using namespace std;


//Creating Node
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node() {
        int value = this->data;
        // recursively delete the rest of the linked list
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory freed for node with data: " << value << endl;
    }

};

//Printing LL
void print(Node* &head){

    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}


//Inserting a node at the head of the Linked List
void insertAtHead(Node* &head ,Node* &tail ,int data){

    //when LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return; 
    }


    //step1:
    Node* newNode = new Node(data);
    //step2:
    newNode->next = head;
    //step3:
    // //First node    :: //Initailizing the Head and Tail by first new node coz the LL is empty
    // if(head==NULL){
    //     tail = newNode;
    // }
    head = newNode;
}

//Inserting a node at the end of the LL
void insertAtTail(Node* &head ,Node* &tail , int  data){

    //when LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return; 
    }


    //step1:
    Node* newNode = new Node(data);
    //step2:   step 2 has 2 nethod to write code both given below
    //METHOD 1
    // if(tail != NULL){
    //     tail->next = newNode;
    // }
    //OR METHOD 2
    // if(tail == NULL){
    //     //Initailizing the Head and Tail by first new node coz the LL is empty
    //     tail = newNode;
    //     head = newNode;
    // }
    // else{
    //     //LL is non empty
    //     tail->next = newNode;
    // }
    tail->next = newNode;
 
    //step3:
    tail = newNode;
}

//FIND length of the linked list
int findLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while(temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}


//INSERTING at a specific position
void insertAtPosition(int data ,int position ,Node* &head ,Node* &tail){

    //when LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
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
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;


    //step 2 : create a new node
    Node* newNode  = new Node(data);

    //step 3 : newNode ka next points to curr
    newNode-> next = curr;

    //step 4 : prev ka next points to newNode
    prev->next = newNode;

}



//Insertion based on value
void insertBasedOnValue(int data ,int value ,Node* &head ,Node* &tail){
    //when LL is empty
    if (head == NULL) {
        cout << "Linked List is empty. Cannot insert based on value." << endl;
        return;
    }

    Node* prev = head;

    // Step 1: Search for the value
    while (prev != NULL && prev->data != value) {
        prev = prev->next;
    }

    Node* curr = prev->next;

    // If value not found
    if (curr == NULL) {
        cout << "Value " << value << " not found in the list." << endl;
        return;
    }

    // Step 2: Insert after the found node
    Node* newNode = new Node(data);

    newNode->next = curr;  // link newNode to curr
    prev->next = newNode;        // link prev to newNode

    // Step 3: If inserted at tail, update tail
    if (newNode->next == NULL) {
        tail = newNode;
    }


}




//DELETION
//delete HEAD
void deleteNode(int position , Node* &head , Node* &tail){

    if(head == NULL){
        cout << "Linked List is empty " << endl;
        return;
    }

    //deleting head
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    //deleting tail
    int len  = findLength(head);
    if(position == len){
        Node* prev = head;
        int i=1;
        while(i<position-1){
            prev = prev->next;
            i++;
        }
        prev->next = NULL;
        Node* temp = tail;
        tail = prev;
        delete temp;
        return;
    }

    //deleting middle/specific node at any position
    int i=1;
    Node* prev= head;
    while(i<position-1){
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

}


void deleteBasedOnValue(int value, Node* &head, Node* &tail) {

    // Case 1: Empty list
    if (head == NULL) {
        cout << "Linked List is empty. Cannot delete based on value." << endl;
        return;
    }

    Node* prev = NULL;
    Node* curr = head;

    // Case 2: deleting HEAD (value found at first node)
    if (curr->data == value) {
        head = head->next;
        curr->next = NULL;   // detach
        delete curr;

        // If list becomes empty
        if (head == NULL)
            tail = NULL;

        return;
    }

    // Case 3: Search for the value
    while (curr != NULL && curr->data != value) {
        prev = curr;
        curr = curr->next;
    }

    // Case 4: Value NOT found
    if (curr == NULL) {
        cout << "Value " << value << " not found in the list." << endl;
        return;
    }

    // Case 5: Delete tail
    if (curr->next == NULL) {
        tail = prev;
    }

    // Case 6: Delete middle node
    prev->next = curr->next;
    curr->next = NULL; // detach before destructor recursion
    delete curr;
}




int main(){

    // Just basic example to check printing LL function
    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);
    // Node* fifth = new Node(50);

    // //Node pointer to next Node
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;

    // cout << "Printing LL : " << endl;
    // print(first);


    //INSERTION 
    // head & Tail insertion
    Node* head = NULL;
     Node* tail = NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);

    insertAtTail(head,tail,60);
    insertAtTail(head,tail,70);
    insertAtTail(head,tail,80);
    insertAtTail(head,tail,90);

    print(head);
    cout << endl;
    cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;

    cout <<endl;
    insertAtPosition(100,8,head,tail);
    print(head);

    cout << endl;
    cout << " value based:";
    insertBasedOnValue(99,20,head,tail);

    print(head);
    cout << endl;
    cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;

    cout << "Deleting Head : " <<endl;
    deleteNode(1,head,tail);
    print(head);
    cout << endl;

    cout << "Deleting Tail : " <<endl;
    deleteNode(8,head,tail);
    print(head);
        cout << endl;

    cout << "Deleting specific position : " <<endl;
    deleteNode(4,head,tail);
    print(head);
    cout << endl;

    cout << "Deleting based on value : " <<endl;
    deleteBasedOnValue(20,head,tail);
    print(head);
    cout << endl;
    
    return 0;
}
//Here I haven't created a function seperatly to delete the complete linked list ..... I have just the destructor to delete the complete list if needed
