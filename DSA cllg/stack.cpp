#include<iostream>
using namespace std;

// 1 STACK in 1 ARRAY 
class Stack{
    private: 
    int *arr;
    int size;
    int top;

    public:
    Stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    //functions
    void push(int data){
        if(size-top > 1){
            //space available 
            top++;
            arr[top] = data;
        }
        else{
            //overflow
            cout << "Stack Overflow " << endl;
        }
    }

    void pop(){
        //underflow
        if(top == -1){
            cout << "Stack Underflow " << endl;
        }
        else{
            //non-empty
            top--;
        }
    }

    int peek(){
        if(top == -1){
            cout << "Stack Underflow " << endl;
            return -1;
        }

        return arr[top];
    }

    int getSize(){
        //return no. of valid element present in Stack i.e. count of elements
        return top+1;
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
           return false;
        }
    }

    //display
    void disp(Stack s){
        while(!s.isEmpty()){
        cout << s.peek() << " ";
        s.pop();
        }
    }
};

int main(){
    Stack s(10);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    //printing stack
    // while(!s.isEmpty()){
    //     cout << s.peek() << " ";
    //     s.pop();
    // }
    cout << endl;
    // s.disp(s);
    // cout << endl;


    //size
    // cout << "Size of Stack: " << s.getSize() << endl;

    Stack sc(100);
    sc = s;
    sc.peek();

    return 0;
}
