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


// Detect & Delete loop in a LL --> using Floyd's Cycle Detection (FCD) --> use FCD to find loop in a LL
bool checkLoop(Node* head){
    //empty LL
    if(head == NULL){
        cout << "LL is empty";
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(slow == fast){
            return true;
        }
    }
    // loop not present
    return false;

}



//Find Starting Point of a loop
Node* startPointOfLoop(Node* &head){
        //empty LL
    if(head == NULL){
        cout << "LL is empty";
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(slow == fast){
            slow = head;
            break;
        }    
    }

    while(fast != slow){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
 
}



//Remove loop in a LL
void removeLoop(Node* &head){
        //empty LL
    if(head == NULL){
        cout << "LL is empty";
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(slow == fast){
            slow = head;
            break;
        }    
    }

    Node* prev = fast;
    while(fast != slow){
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next = NULL;

}


int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eighth = new Node(80);
    Node* ninth = new Node(90);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    ninth->next=fifth;
   

    // cout << endl ;
    // print(head);
    // cout << endl;

    //Detect & Delete :
    //checking loop
    cout << "Loop is present or not: " << checkLoop(head) << endl;

    //starting point
    cout << "Starting Point of LL :  " << startPointOfLoop(head)->data << endl;

    //Remove Loop
    removeLoop(head);
    cout << "Loop is removed" << endl;
    print(head);
    cout << endl;
    cout << "Loop is present or not: " << checkLoop(head) << endl;

    
    return 0;
}
