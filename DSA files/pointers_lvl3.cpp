#include<iostream>
using namespace std;

// void util(int* p){
//     // p=p+1; //call by value
//     *p =*p+1; // dereference
//     // cout <<p<<endl;
// }

// void solve(int** ptr){
//     // ptr=ptr+1; //no change in x value
//     // *ptr = *ptr+1; // no change in x value
//     **ptr = **ptr+1;  //will change x
// }

// void solve(int& value){
//     // value++;
//     value=50;
// }

//pointer pass by reference
// void solve(int*& p){
//     p=p+1;
// }

int main(){
    // int a=5;
    // int* p = &a;
    // int** q = &p;
    // cout <<a << endl;
    // cout << &a << endl;
    // cout <<p << endl;
    // cout <<&p << endl;
    // cout <<*p << endl;
    // cout <<q << endl;
    // cout <<&q << endl;
    // cout <<*q << endl;
    // cout <<**q << endl;



    // int a=5;
    // int*p = &a;

    // cout << "Before" << endl;
    // cout << a << endl;
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;
    // util(p);
    // cout << "After" << endl;
    // cout << a << endl;
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;


    // int x=12;
    // int *p=&x;
    // int** q=&p;
    // solve(q);
    // cout << x << endl;


    //REFERENCE VARIABLE
    // int a=5;
    // int &b = a;

    // cout << a <<endl;
    // cout << b << endl;

    // a++;
    // cout << a <<endl;
    // cout << b << endl;

    // b++;
    // cout << a <<endl;
    // cout << b << endl;



    //PASS BY REFERENCE
    // int a = 5;
    // cout << "before" <<endl;
    // cout << a <<endl;
    // solve(a);
    // cout << "After Pass by Reference" << endl;
    // cout << a << endl;


    //POINTERS PASS BY REFERENCE
    // int a=5;
    // int *p = &a;
    // cout << "before" <<endl;
    // cout << p <<endl;
    // solve(p);
    // cout << "After Pass by Reference" << endl;
    // cout <<  p<< endl;

    




    return 0;
}