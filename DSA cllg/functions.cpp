#include<iostream> 
using namespace std;

int main(){
    goto mib;
    web : cout << "Hi" << endl;
    goto dev;
    mib : cout << "Hello" << endl;
    goto web;
    dev : cout << "guys" << endl;
}