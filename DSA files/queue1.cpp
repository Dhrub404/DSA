#include<iostream>
#include<queue>
#include<deque>

using namespace std;

//DEQUE USING STL
int main(){
    deque<int> dq;

    dq.push_front(5);
    dq.push_front(15);

    dq.push_back(10);
    dq.push_back(20);

    cout << "Size of Deque: " << dq.size() << endl;
    dq.pop_back();
    dq.pop_front();
    cout << "Size of Deque: " << dq.size() << endl;

    cout << "Front of Deque: " << dq.front() << endl;
    cout << "Back of Deque: " << dq.back() << endl;

    if(dq.empty()){
        cout <<"Deque is empty" <<endl;
    }
    else{
        cout <<"Deque is not empty" <<endl;
    }


    return 0;
}




















//DOUBLY ENDED QUEUE(DEQUE) IMPLEMENTATION USING CLASS
// class deque{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     deque(int size){
//         this->size = size;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }

//     void pushRear(int data){
//         //queue full
//         if((front==0 && rear == size-1) || front == rear+1){
//             cout << "Queue is full" << endl;
//             return;
//         }

//         //single element-->first element
//         else if(front==-1){
//             front = rear = 0;
//             arr[rear] = data;
//         }

//         //cicular nature
//         else if(rear == size-1 && front != 0){
//             rear=0;
//             arr[rear] = data;
//         }

//         //default
//         else{
//             rear++;
//             arr[rear] = data;
//         }
//     }



//     void pushFront(int data){
//         //queue full
//         if((front==0 && rear == size-1) || front == rear+1){
//             cout << "Queue is full" << endl;
//             return;
//         }

//         //single element-->first element
//         else if(front==-1){
//             front = rear = 0;
//         }

//         //cicular nature
//         else if(front==0 && rear != size-1){
//             front = size-1;
//         }

//         //default
//         else{
//             front--;
//         }
//         arr[front] = data;
//     }



//     void popFront(){
//         //empty check
//         if(front==-1){
//             cout << "Queue is empty" <<endl;
//             return;
//         }

//         //single element removal
//         else if(front==rear){
//             arr[front] = -1;
//             front = rear = -1;
//         }

//         //cicular nature
//         else if(front==size-1){
//             arr[front] = -1;
//             front = 0;
//         }

//         //default/normal case
//         else{
//             arr[front] = -1;
//             front++;
//         }
//     }


//     void popRear(){
//         //empty check
//         if(front==-1){
//             cout << "Queue is empty" <<endl;
//             return;
//         }

//         //single element removal
//         else if(front==rear){
//             arr[rear] = -1;
//             front = rear = -1;
//         }

//         //cicular nature
//         else if(rear==0){
//             arr[rear] = -1;
//             rear = size-1;
//         }

//         //default/normal case
//         else{
//             arr[rear] = -1; 
//             rear--;
//         }
//     }

// };


















//CIRCULAR QUEUE
// class CirQueue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     CirQueue(int size){
//         this->size = size;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }

//     void push(int data){
//         //queue full
//         if((front==0 && rear == size-1) || front == rear+1){
//             cout << "Queue is full" << endl;
//             return;
//         }

//         //single element-->first element
//         else if(front==-1){
//             front = rear = 0;
//             arr[rear] = data;
//         }

//         //cicular nature
//         else if(rear == size-1 && front != 0){
//             rear=0;
//             arr[rear] = data;
//         }

//         //default
//         else{
//             rear++;
//             arr[rear] = data;
//         }
//     }

//     void pop(){
//         //empty check
//         if(front==-1){
//             cout << "Queue is empty" <<endl;
//             return;
//         }

//         //single element removal
//         else if(front==rear){
//             arr[front] = -1;
//             front = rear = -1;
//         }

//         //cicular nature
//         else if(front==size-1){
//             arr[front] = -1;
//             front = 0;
//         }

//         //default/normal case
//         else{
//             front++;
//         }
//     }

// };



















//QUEUE IMPLEMENTATION USING CLASS
// class Queue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     Queue(int size){
//         this->size = size;
//         arr = new int[size];
//         front = 0;
//         rear = 0;
//     }

//     void push(int data){
//         if(rear==size){
//             cout << "Queue is full" << endl;
//         }
//         else{
//             arr[rear] = data;
//             rear++;
//         }
//     }

//     void pop(){
//         if(front == rear){
//             cout <<"Queue is empty" << endl;
//         }
//         else{
//             arr[front] = -1;
//             front++;
//             if(front==rear){
//                 front=0;
//                 rear=0;
//             }
//         }
//     }

//     int getFront(){
//         if(front == rear){
//             cout <<"Queue is empty" << endl;
//             return-1;
//         }
//         else{
//             return arr[front];
//         }
//     }

//     bool isEmpty(){
//         if(front == rear){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     int getSize(){
//         return rear-front;
//     }


// };

// int main(){
//     Queue q(10);
//     q.push(5);
//     q.push(15);
//     q.push(25);
//     q.push(35);
//     q.push(45);

//     cout << "Size of queue: " << q.getSize() << endl;
//     q.pop();
//     cout << "Size of queue: " << q.getSize() << endl;

//     cout << "Front element is: " << q.getFront() << endl;
    
//     if(q.isEmpty()){
//         cout << "Queue is empty " << endl;
//     }
//     else{
//         cout << "Queue is not empty" << endl;
//     }

//     return 0;
// }














//QUEUE IMPLEMENTATION USING STL
// int main(){
//     //creation
//     queue<int> q;

//     //insertion
//     q.push(5);
//     q.push(15);
//     q.push(25);
//     q.push(35);
//     q.push(45);

//     //size
//     cout << "Size of queue: " << q.size() << endl;

//     //pop
//     q.pop();

//     //size
//     cout << "Size of queue: " << q.size() << endl;

//     //empty check
//     if(q.empty()){
//         cout << "Queue is empty " << endl;
//     }
//     else{
//         cout << "Queue is not empty" << endl;
//     }

//     //front
//     cout << "Front element is: " << q.front() << endl;


//     return 0;
// }