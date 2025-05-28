#include<iostream>
using namespace std;

int main (){
    // int a=5;
    // cout << a << endl;
    // //ADDRESS OF A
    // cout << &a;

    // int a=5;
    // // pointer create 

    // int * ptr = &a;

    // // Access the value ptr is pointing to 
    // cout << *ptr << endl;

    // cout << sizeof(ptr) << endl;


    // double d=1.121;
    // double * db=&d;

    // cout << sizeof(db);


    // segmentation fault (BAD PRACTICE)
    // int* ptr;
    // cout << *ptr << endl;

    //NULL POINTER
    // int *ptr= nullptr; //0 //NULL
    // cout << *ptr << endl;


    // COPY POINTERS 
    // int a=5; 
    // int *ptr= &a;
    // int *dusraptr = ptr;

    // cout << *ptr << endl;
    // cout << *dusraptr << endl;


    // EXAMPLE
    int a=5;
    int *p= &a;
    int *q =p;
    int *r=q;

    cout << a << endl; //5
    cout << &a << endl; // address of a
    cout << p << endl; // address of a
    cout << &p << endl; // address of p
    cout << *p << endl; // 5
    cout << q << endl; // address of a
    cout << &q << endl; // address of q
    cout << *q << endl; // 5
    cout << r << endl; // address of a
    cout << &r << endl; // address of r
    cout << *r << endl; // 5
    cout << (*p + *r + *q) << endl; // 15
    cout << (*p)*2 + (*r)*3 << endl; // 25
    cout << (*p/2) - (*r/2) << endl; // 0


} 