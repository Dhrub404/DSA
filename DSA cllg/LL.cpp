#include<iostream>
using namespace std;


// //Creating Node
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

//     //destructor
//     ~Node() {
//         int value = this->data;
//         // recursively delete the rest of the linked list
//         if (this->next != NULL) {
//             delete next;
//             this->next = NULL;
//         }
//         cout << "Memory freed for node with data: " << value << endl;
//     }
// };

// //Printing LL
// void print(Node* &head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// //insert using jump no need of head and tail in this
// void jumpInsert(Node* &root,int data){
//     Node* newNode = new Node(data);
//     Node* temp = root;

//     if(root == NULL){
//         root = newNode;
//         return;
//     }

//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = newNode;


// }

// //Inserting a node at the head of the Linked List
// void insertAtHead(Node* &head ,Node* &tail ,int data){

//     //when LL is empty
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return; 
//     }

//     //step1:
//     Node* newNode = new Node(data);
//     //step2:
//     newNode->next = head;
//     //step3:
//     // //First node    :: //Initailizing the Head and Tail by first new node coz the LL is empty
//     // if(head==NULL){
//     //     tail = newNode;
//     // }
//     head = newNode;
// }

// //Inserting a node at the end of the LL
// void insertAtTail(Node* &head ,Node* &tail , int  data){

//     //when LL is empty
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return; 
//     }

//     //step1:
//     Node* newNode = new Node(data);
//     //step2:   step 2 has 2 method to write code both given below
//     //METHOD 1
//     // if(tail != NULL){
//     //     tail->next = newNode;
//     // }
//     //OR METHOD 2
//     if(tail == NULL){
//         //Initailizing the Head and Tail by first new node coz the LL is empty
//         tail = newNode;
//         head = newNode;
//     }
//     else{
//         //LL is non empty
//         tail->next = newNode;
//     }
//     tail->next = newNode;
 
//     //step3:
//     tail = newNode;
// }

// //FIND length of the linked list
// int findLength(Node* head) {
//     int length = 0;
//     Node* temp = head;
//     while(temp != NULL) {
//         length++;
//         temp = temp->next;
//     }
//     return length;
// }

// //delete a node
// void deleteNode(Node *&head, Node *&tail, int position){
//     if (head == nullptr){
//         cout << "Can not delete because ll is empty: " << endl;
//         return;
//     }
//     if (position <= 0){
//         cout << "can not delete at 0 because index is starting for 1: " << endl;
//         return;
//     }
//     // delete the head
//     if (position == 1){
//         Node *temp = head;
//         head = head->next;
//         temp->next = nullptr;
//         delete temp;
//         return;
//     }

//     int len = findLength(head);
//     // delete at end
//     if (position == len){
//         Node *temp = tail;
//         // find prev
//         int i = 1;
//         Node *prev = head;
//         while (i < position - 1){
//             prev = prev->next;
//             i++;
//         }
//         // delete
//         prev->next = nullptr;
//         tail = prev;
//         delete temp;
//         return;
//     }

//     // delete at position
//     int i = 1;
//     Node *prev = head;
//     while (i < position - 1)
//     {
//         prev = prev->next;
//         i++;
//     }
//     Node *curr = prev->next;

//     prev->next = curr->next;
//     curr->next = nullptr;
//     delete curr;
// }

// //searching
// bool search(Node* &head, int target){
//     Node* temp = head;
        // if(head == NULL){
        //     cout << "Empty list "<< endl;
        //     return false;
        // }
//     while(temp != NULL){
//         if(temp->data == target){
//             return true;
//         }
//         temp = temp->next;
//     }

//     return false;
// }


// //INSERTING at a specific position
// void insertAtPosition(int data ,int position ,Node* &head ,Node* &tail){

//     //when LL is empty
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return; 
//     }

//     //step 1 : find the position : find prev & curr
//     if(position == 0){
//         insertAtHead(head,tail,data);
//         return;
//     }
//     int len = findLength(head);
//     if(position >= len){
//         insertAtTail(head,tail,data);
//         return;
//     }
//     int i=1;
//     Node* prev = head;
//     while(i<position){
//         prev = prev->next;
//         i++;
//     }
//     Node* curr = prev->next;

//     //step 2 : create a new node
//     Node* newNode  = new Node(data);

//     //step 3 : newNode ka next points to curr
//     newNode-> next = curr;

//     //step 4 : prev ka next points to newNode
//     prev->next = newNode;

// }

// int main(){
//     Node* head = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);
//     Node* tail = new Node(60);


//     head->next=second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fifth;
//     fifth->next=tail;

//     //insertion using root node and jumping statement
//     Node* root = new Node(10);
//     jumpInsert(root , 20);
//     jumpInsert(root , 30);
//     jumpInsert(root , 40);
//     jumpInsert(root , 50);
//     cout << endl ;
//     print(root);
//     cout << endl;

//     //delete node
//     // deleteNode(head,tail, 2);

//     //searching
//     cout << search(head,30) << endl;
    


//     // cout << endl ;
//     // print(head);
//     // cout << endl;

//     return 0;
// }




//LL using jump by sir method
class Node {
public:
    int data;
    Node* add;

    Node(int data) {
        this->data = data;
        this->add = NULL;
    }
};

class Ll {
public:
    Node* root;

    Ll() {
        root = NULL;
    }

    // APPEND
    void append(int data) {
        Node* t = new Node(data);

        if (root == NULL) {
            root = t;
            return;
        }

        Node* x = root;

        while (x->add != NULL) {
            x = x->add;
        }

        x->add = t;
    }

    // SEARCH
    bool search(int key) {
        Node* x = root;
        if(x == NULL){
            cout << "Empty list "<< endl;
            return false;
        }

        while (x != NULL) {
            if (x->data == key) {
                return true;
            }

            x = x->add;
        }

        return false;
    }

    // DELETE
    void del(int key) {

        // empty list
        if (root == NULL) {
            return;
        }

        // delete first node
        if (root->data == key) {
            Node* temp = root;
            root = root->add;
            delete temp;
            return;
        }

        Node* prev = root;
        Node* curr = root->add;

        while (curr != NULL) {

            if (curr->data == key) {
                prev->add = curr->add;
                delete curr;
                return;
            }

            prev = curr;      
            curr = curr->add;  
        }
    }

    // PRINT
    void print() {
        Node* x = root;

        while (x != NULL) {
            cout << x->data << " ";
            x = x->add;
        }

        cout << endl;
    }
};

int main() {

    Ll l;

    l.append(10);
    l.append(20);
    l.append(30);
    l.append(40);

    l.print();

    // SEARCH
    cout << l.search(30) << endl; // 1
    cout << l.search(100) << endl; // 0

    // DELETE
    l.del(30);

    l.print();

    return 0;
}