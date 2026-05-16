#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n = 12;
    int digits = log10(n) + 1;
    int first = pow(10,digits-1) + 1;
    // cout << first << endl;
    int last = pow(10,digits) - 1;
    // cout << last << endl;
    int count = 0;
    bool check = false;

    while(first <= last){
        for(int i=2;i*i<=first;i++){
            if(first%i == 0){
                check = true;
                break;
            }
        }
        if(check == false)  count++;
        check = false;

        first++;
        
    }
    cout << count << endl;
}