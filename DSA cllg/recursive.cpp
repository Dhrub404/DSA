#include<iostream>
using namespace std;
int n;

void fun(int i){
    if(i<4){
        cout << i << " ";
        fun(i+1);
    }
    cout << i << " ";
}
int main(){
    fun(n);
}