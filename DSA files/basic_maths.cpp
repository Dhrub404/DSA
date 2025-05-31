#include<iostream>
using namespace std;

int fastExponentiation(int a,int b){
    int ans=1;
    while(b>0){
        if(b & 1){  //check odd
            ans*=a;
        }
        a=a*a;
        b>>=1;  //b=b/2

    }
    return ans;
}

// int slowExponentiation(int a, int b){
//     //normal method to find a^b exponential
//     int ans=1;
    
//     for(int i=0;i<b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }

int main(){
    int a,b;
    cout << "Enter a & b : " << endl;
    cin >> a >> b;
    // int ans = slowExponentiation(a,b);
    // cout << ans << endl;
    int ans = fastExponentiation(a,b);
    cout << ans << endl;


}