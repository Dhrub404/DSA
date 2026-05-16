#include<iostream>
using namespace std;

int main(){
    float amt = 1600;

    if(amt > 499){
        if(amt < 1000){
            amt = amt - (amt * 10/100);
            cout << amt <<endl;
        }
    
        else if(amt < 1500){
            amt = amt - (amt * 20/100);
            cout << amt <<endl;
            
        }
        else{
            amt = amt - (amt * 10/100);
            amt = amt - (amt * 20/100);
            amt = amt - (amt * 15/100);
            cout << amt <<endl;
        }
    }
}