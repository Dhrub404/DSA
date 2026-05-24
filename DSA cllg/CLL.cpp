#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


//Printing CLL
void print(Node* &head){

    //empty CLL
    if(head == NULL){
        cout << "Empty CLL" << endl;
        return;
    }

    Node* temp = head;

    do{
        cout << temp->data << " ";
        temp = temp->next;

    }while(temp != head);
}

//insert using jump no need of head and tail in this
void jumpInsert(Node* &root,int data){
    Node* newNode = new Node(data);

    //when CLL is empty
    if(root == NULL){
        root = newNode;
        newNode->next = root;
        return;
    }

    Node* temp = root;

    //go till last node
    while(temp->next != root){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = root;
}

//Inserting a node at the head of the Linked List
void insertAtHead(Node* &head ,Node* &tail ,int data){

    //when LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;

        //making circular connection
        tail->next = head;
        return;
    }

    //step1:
    Node* newNode = new Node(data);

    //step2:
    newNode->next = head;

    //step3:
    head = newNode;

    //step4:
    tail->next = head;
}

//Inserting a node at the end of the LL
void insertAtTail(Node* &head ,Node* &tail , int  data){

    //when LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;

        //making circular connection
        tail->next = head;
        return;
    }

    //step1:
    Node* newNode = new Node(data);

    //step2:
    tail->next = newNode;

    //step3:
    tail = newNode;

    //step4:
    tail->next = head;
}

//FIND length of the linked list
int findLength(Node* head) {

    //empty CLL
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

    //when LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;

        tail->next = head;
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
    newNode->next = curr;

    //step 4 : prev ka next points to newNode
    prev->next = newNode;
}

//delete a node
void deleteNode(Node *&head, Node *&tail, int position){
    if (head == nullptr){
        cout << "Can not delete because ll is empty: " << endl;
        return;
    }

    if (position <= 0){
        cout << "can not delete at 0 because index is starting for 1: " << endl;
        return;
    }

    // delete the head
    if (position == 1){
        //single node CLL
        if(head == tail){
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }

        Node *temp = head;
        head = head->next;

        tail->next = head;

        temp->next = nullptr;
        delete temp;
        return;
    }

    int len = findLength(head);

    // delete at end
    if (position == len){

        Node *temp = tail;

        // find prev
        int i = 1;
        Node *prev = head;

        while (i < position - 1){
            prev = prev->next;
            i++;
        }

        // delete
        prev->next = head;
        tail = prev;

        delete temp;
        return;
    }

    // delete at position
    int i = 1;
    Node *prev = head;

    while (i < position - 1){
        prev = prev->next;
        i++;
    }

    Node *curr = prev->next;

    prev->next = curr->next;

    curr->next = nullptr;
    delete curr;
}

//get middle using slow fast pointer
int getMiddle(Node* head) {

    //empty CLL
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





























// CLL using jumping logic 
// class Node {
// public:
//     int data;
//     Node* add;

//     Node(int data) {
//         this->data = data;
//         this->add = NULL;
//     }
// };


// class CLL {
// public:
//     Node* root;

//     CLL() {
//         root = NULL;
//     }

//     // APPEND
//     void append(int data) {
//         Node* t = new Node(data);

//         // first node
//         if (root == NULL) {
//             root = t;
//             t->add = root;
//             return;
//         }

//         Node* x = root;

//         // move till last node
//         while (x->add != root) {
//             x = x->add;
//         }

//         x->add = t;
//         t->add = root;
//     }

//     // SEARCH
//     bool search(int key) {

//         if(root == NULL){
//             cout << "Empty list " << endl;
//             return false;
//         }

//         Node* x = root;

//         do{
//             if(x->data == key){
//                 return true;
//             }

//             x = x->add;

//         }while(x != root);

//         return false;
//     }

//     // DELETE
//     void del(int key) {

//         // empty list
//         if (root == NULL) {
//             return;
//         }

//         // delete first node
//         if (root->data == key) {

//             // only one node
//             if(root->add == root){
//                 delete root;
//                 root = NULL;
//                 return;
//             }

//             Node* last = root;

//             while(last->add != root){
//                 last = last->add;
//             }

//             Node* temp = root;
//             root = root->add;
//             last->add = root;

//             delete temp;
//             return;
//         }

//         Node* prev = root;
//         Node* curr = root->add;

//         do{

//             if(curr->data == key){
//                 prev->add = curr->add;
//                 delete curr;
//                 return;
//             }

//             prev = curr;
//             curr = curr->add;

//         }while(curr != root);
//     }

//     // PRINT
//     void print() {

//         if(root == NULL){
//             cout << "Empty list" << endl;
//             return;
//         }

//         Node* x = root;

//         do{
//             cout << x->data << " ";
//             x = x->add;

//         }while(x != root);

//         cout << endl;
//     }
// };

// int main() {

//     CLL cll;

//     cll.append(10);
//     cll.append(20);
//     cll.append(30);
//     cll.append(40);

//     cll.print();

//     // SEARCH
//     cout << cll.search(30) << endl; // 1
//     cout << cll.search(100) << endl; // 0

//     // DELETE
//     cll.del(30);

//     cll.print();

//     return 0;
// }