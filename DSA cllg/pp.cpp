#include<iostream>
#include<math.h>
using namespace std;

int rotate(int n){

    int digit = log10(n);
    int divi = pow(10,digit);
    int first = n / divi;
    n = ((n%divi) * 10) + first;
    cout << n;

    return n;
   
}


int main(){
    rotate(10928);
    return 0;
}