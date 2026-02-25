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



//Reverse using Recursion
Node* reverseUsingRecursion(Node* &prev , Node* &curr){
    //base case
    if(curr==NULL){
        //LL is reversed
        return prev;
    }

    //non-empty
    Node* forward = curr->next;

    curr->next = prev;
    prev= curr ;
    curr=forward;

    return reverseUsingRecursion(prev,curr);
}


Node* reverseUsingLoop(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    
    while(curr!=NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}



//Reverse K-group nodes
Node* reverseKNodes(Node* &head , int k){
    //empty
    if(head == NULL){
        cout << "LL is empty" <<endl;
        return NULL;
    }
    
    //if k>length
    int len = findLength(head);
    if(k>len){
        //cout << "Enter valid value of K" << endl;
        return head;
    }


    //non-empty
    //step A: reverse first K nodes of LL
    Node* prev = NULL;
    Node* curr = head;

    Node* forward = curr->next;

    int count = 0;

    while(count<k){
        forward = curr->next;
        curr->next = prev;
        prev= curr ;
        curr=forward;
        count++;
    }

    //step B: recursive call
    if(forward != NULL){
        head->next = reverseKNodes(forward,k);
    }

    //step C : return prev coz it will be the head of reversed LL 
    return prev;
}



//FIND MIDDLE OF A LL  :- Tortoise Algorithm
Node* getMiddle(Node* &head){
    //empty
    if(head == NULL){
        cout << "Empty LL";
        return NULL;
    }

    //single node
    if(head->next==NULL){
        return head;
    }



    //non-empty
    Node* slow = head ;
    Node* fast = head->next ;    //we have initialized fast with head->next coz we need get 30 as middle for even nodes & this doesn't affects odd case    && if we want 40 as middle node and make fast = head 
    int len = findLength(head);

    while(slow != NULL && fast != NULL){      //slow != NULL not needed it doesn't effect anything
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        
    }
    return slow;
}


int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
   



    cout << endl ;
    print(head);
    cout << endl;

    //Reverse LL code block below
    // Node* prev = NULL;
    // Node* curr = head;
    // head = reverseUsingRecursion(prev,curr);
    // print(head);
    // cout << endl;
    // head = reverseUsingLoop(head);
    // print(head);
    // cout << endl;


    //Find middle 
    // cout << endl;
    // Node* middle = getMiddle(head);
    // cout << "Middle Node:" << middle->data;
    // cout << endl; 


    //Reverse k-group nodes in LL
    int k =3;
    head = reverseKNodes(head,k);
    print(head);
    cout << endl;
    
    return 0;
}

