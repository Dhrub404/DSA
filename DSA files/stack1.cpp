#include <iostream>
#include <stack>
using namespace std;


// 1 STACK in 1 ARRAY 
// class Stack{
//     private: 
//     int *arr;
//     int size;
//     int top;

//     public:
//     Stack(int size){
//         arr = new int[size];
//         this->size = size;
//         top = -1;
//     }

//     //functions
//     void push(int data){
//         if(size-top > 1){
//             //space available 
//             top++;
//             arr[top] = data;
//         }
//         else{
//             //overflow
//             cout << "Stack Overflow " << endl;
//         }
//     }

//     void pop(){
//         //underflow
//         if(top == -1){
//             cout << "Stack Underflow " << endl;
//         }
//         else{
//             //non-empty
//             top--;
//         }
//     }

//     int getTop(){
//         if(top == -1){
//             cout << "Stack Underflow " << endl;
//             return -1;
//         }

//         return arr[top];
//     }

//     int getSize(){
//         //return no. of valid element present in Stack
//         return top+1;
//     }

//     bool isEmpty(){
//         if(top == -1){
//             return true;
//         }
//         else{
//            return false;
//         }
//     }
// };

// int main(){
//     Stack s(10);

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);

//     //printing stack
//     while(!s.isEmpty()){
//         cout << s.getTop() << " ";
//         s.pop();
//     }
//     cout << endl;

//     //size
//     cout << "Size of Stack: " << s.getSize() << endl;

// }






// 2 STACK in an ARRAY 
// class Stack{
//     public:
    // int *arr;
    // int size;
    // int top1;
    // int top2;

//     Stack(int size){
//         arr = new int[size];
//         this->size = size;
//         top1 = -1;
//         top2 = size;
//     }

//     //functions for stack 1
//     void push1(int data){
//         if(top2-top1 == 1){
//             cout << "Stack 1 Overflow" << endl; 
//         }
//         else{
//             top1++;
//             arr[top1] = data;
//         }
//     }

//     void pop1(){
//         if(top1 == -1){
//             cout <<"Stack 1 Underflow" << endl;
//         }
//         else{
//             top1--;
//         }
//     }

//     //fuctions for top2
//     void push2(int data){
//         if(top2-top1 == 1){
//             cout << "Stack 2 Overflow" << endl; 
//         }
//         else{
//             top2--;
//             arr[top2] = data;
//         }
//     }

//     void pop2(){
//         if(top2 == size){
//             cout <<"Stack 2 Underflow" << endl;
//         }
//         else{
//             top2++;
//         }
//     }

// };


// int main(){
//     Stack s(5);

//     s.push1(10);
//     s.push1(20);
//     s.push2(30);
//     s.push2(40);
//     s.push2(40);

//     s.pop1();
//     s.pop1();
//     s.pop1();


//     return 0;
// }




//REVERSE a STRING using STACK
// int main(){
//     string str = "dhruv";

//     stack<char> s;

//     for(int i=0;i<str.length();i++){
//         s.push(str[i]);
//     }

//     while(!s.empty()){
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;

//     return 0;
// }




//FIND THE MIDDLE ELEMENT OF A STACK
void printMiddle(stack<int> s , int &totalSize){
    //empty
    if(s.size() == 0){
        cout << "Stack is empty" << endl;
    }
    //base case
    if((totalSize/2)+1 == s.size()){
        cout << "Middle Element: " << s.top() <<endl;
        return;
    }

    int temp = s.top();
    s.pop();
    
    //recursive
    printMiddle(s,totalSize);

    //backtracking
    s.push(temp);

}


int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    int totalSize = s.size();
    printMiddle(s,totalSize);


    return 0;
}











//Implementtation using STL 
// int main(){
//     //creation of stack
//     stack<int> st;

//     //insertion in stack
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
    
    
//     //remove
//     st.pop();

//     //peek 
//     cout << "Element on top is: " << st.top() << endl;

//     //size
//     cout << "Size of Stack is: " << st.size() << endl;

//     //check empty
//     if(st.empty()){
//         cout << "Stack is empty" <<endl;
//     }
//     else{
//         cout << "Stack is not empty" << endl;
//     }

//     while(!st.empty()){
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;


//     return 0;
// }