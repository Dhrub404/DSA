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
    

    return 0;
}

