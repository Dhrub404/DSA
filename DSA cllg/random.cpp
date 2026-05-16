#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int n = 1234;
    int len = log10(n) + 1;
    int divi = pow(10,len-1);

    while(n>0){
        int out = n/divi;
        cout << out << endl;
        n = n % divi;
        divi = divi/10;
    }

    return 0;
}