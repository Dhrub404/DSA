#include<iostream>
using namespace std;

// class Queue{
//     private:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     public:

//     // Constructor
//     Queue(int size){
//         this->size = size;
//         arr = new int[size];

//         front = 0;
//         rear = -1;
//     }

//     // Enqueue Operation
//     void enqueue(int data){

//         // Overflow Condition
//         if(rear == size - 1){
//             cout << "Queue Overflow" << endl;
//         }
//         else{
//             rear++;
//             arr[rear] = data;
//         }
//     }

//     // Dequeue Operation
//     void dequeue(){
//         // Underflow Condition
//         if(isEmpty()){
//             cout << "Queue is empty" << endl;
//         }
//         cout << arr[front] << " is removed" << endl;
//         front++;
//         if(front > rear){
//             rear = front = -1;
//         }
//     }

//     // Peek / Front Element
//     int peek(){
//         if(front > rear){
//             cout << "Queue is Empty" << endl;
//             return -1;
//         }

//         return arr[front];
//     }

//     // Check Empty
//     bool isEmpty(){
//         if(front > rear){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     // Get Size of Queue
//     int getSize(){
//         if(front > rear){
//             return 0;
//         }
//         return rear - front + 1;
//     }

//     // Display Queue
//     void display(){
//         if(front > rear){
//             cout << "Queue is Empty" << endl;
//             return;
//         }
//         cout << "Queue Elements: ";

//         for(int i = front; i <= rear; i++){
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main(){

//     Queue q(10);

//     // Enqueue
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);

//     // Display
//     q.display();

//     // Peek
//     cout << "Front Element: " << q.peek() << endl;

//     // Dequeue
//     q.dequeue();

//     // Display after dequeue
//     q.display();

//     // Size
//     cout << "Size of Queue: " << q.getSize() << endl;

//     // Empty Check
//     if(q.isEmpty()){
//         cout << "Queue is Empty" << endl;
//     }
//     else{
//         cout << "Queue is Not Empty" << endl;
//     }

//     return 0;
// }


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


//CIRCULAR QUEUE USING count
// class Queue{

//     private:
//     int *queue;
//     int size;
//     int front = -1;
//     int rear = -1;
//     int c = 0;

//     public:

//     // Constructor
//     Queue(int size){
//         queue = new int[size];
//         this->size = size;
//     }

//     // Enqueue
//     void enqueue(int data){

//         if(front == -1)
//             front++;

//         if(c == size){
//             cout << "Queue is fullllllllllll" << endl;
//             return;
//         }

//         rear = (rear + 1) % size;
//         queue[rear] = data;
//         c++;

//         cout << queue[rear] << " is inserted" << endl;
//     }

//     // Peek
//     void peek(){

//         if(is_empty()){
//             cout << "queue is empty" << endl;
//             return;
//         }

//         cout << queue[front] << " is peek" << endl;
//     }

//     // Dequeue
//     void dequeue(){

//         if(is_empty()){
//             cout << "queue is empty" << endl;
//             return;
//         }

//         cout << queue[front] << " is removed" << endl;

//         front = (front + 1) % size;
//         c--;

//         if(c == 0){
//             front = -1;
//             rear = -1;
//         }
//     }

//     // Display
//     void disp(){

//         cout << "\nElement \t position" << endl;
//         cout << "**************************" << endl;

//         if(is_empty()){
//             cout << "queue is empty" << endl;
//             return;
//         }

//         int in = front;

//         for(int i = 0; i < c; i++){
//             cout << queue[in] << " \t\t " << in << endl;
//             in = (in + 1) % size;
//         }

//         cout << endl;
//     }

//     // is_empty
//     bool is_empty(){
//         return c == 0;
//     }
// };

// int main(){

//     Queue q1(5);

//     q1.peek();
//     q1.disp();

//     q1.enqueue(10);
//     q1.enqueue(20);
//     q1.enqueue(30);

//     q1.peek();
//     q1.disp();

//     q1.enqueue(40);
//     q1.enqueue(90);

//     q1.dequeue();
//     q1.dequeue();
//     q1.dequeue();

//     q1.peek();

//     q1.enqueue(840);
//     q1.enqueue(190);
//     q1.enqueue(850);
//     q1.enqueue(920);

//     q1.dequeue();

//     q1.disp();

//     q1.peek();

//     return 0;
// }

//CIRCULAR USING MOD

// class Queue{

//     private:
//     int *queue;
//     int size;
//     int front;
//     int rear;
//     int c;

//     public:

//     // Constructor
//     Queue(int size){
//         this->size = size;

//         queue = new int[size];

//         front = -1;
//         rear = -1;
//         c = 0;
//     }

//     // Enqueue
//     void enqueue(int data){

//         // Queue Full
//         if(rear == size - 1){
//             cout << "Queue is Full" << endl;
//             return;
//         }

//         // First Element
//         if(front == -1){
//             front = 0;
//         }

//         rear++;
//         queue[rear] = data;
//         c++;

//         cout << queue[rear] << " is inserted" << endl;
//     }

//     // Dequeue
//     void dequeue(){

//         // Queue Empty
//         if(is_empty()){
//             cout << "Queue is Empty" << endl;
//             return;
//         }

//         cout << queue[front] << " is removed" << endl;

//         front++;
//         c--;

//         // Reset Queue
//         if(c == 0){
//             front = -1;
//             rear = -1;
//         }
//     }

//     // Peek
//     void peek(){

//         if(is_empty()){
//             cout << "Queue is Empty" << endl;
//             return;
//         }

//         cout << queue[front] << " is peek" << endl;
//     }

//     // Display
//     void disp(){

//         cout << "\nElement \t Position" << endl;
//         cout << "**************************" << endl;

//         if(is_empty()){
//             cout << "Queue is Empty" << endl;
//             return;
//         }

//         for(int i = front; i <= rear; i++){
//             cout << queue[i] << " \t\t " << i << endl;
//         }

//         cout << endl;
//     }

//     // is_empty
//     bool is_empty(){
//         return c == 0;
//     }
// };

// int main(){

//     Queue q1(5);

//     q1.peek();
//     q1.disp();

//     q1.enqueue(10);
//     q1.enqueue(20);
//     q1.enqueue(30);

//     q1.peek();
//     q1.disp();

//     q1.enqueue(40);
//     q1.enqueue(90);

//     q1.dequeue();
//     q1.dequeue();
//     q1.dequeue();

//     q1.peek();

//     // These insertions may fail because
//     // space is not reused without modulus
//     q1.enqueue(840);
//     q1.enqueue(190);

//     q1.dequeue();

//     q1.disp();

//     q1.peek();

//     return 0;
// }
