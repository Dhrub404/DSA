#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

int main(){
    //digit extraction 2nd problem
    // int n = 1234;
    // int q = n/10;

    // cout << q << endl;

    //Remove first bit --> 1234 ---> 234
    // int n = 1234;
    // int x = n;
    // int count = 0;
    // while(x>0){
    //     x = x/10;
    //     count++;
    // }
    // cout << "no. of digits " << count << endl;      //to check count is working or not 

    // int divi = 1;
    // while(count>1){     //we want to remove 1st number , therefore increase divi by 10
    //     divi *= 10;
    //     count--;
    // }

    // n = n%divi;
    // cout << n << endl;

    //unsigned explained
    // unsigned char c = -259;
    // printf("%u", c);
    // printf("\n");


    //find maximum digit
    // int n = 8234;
    // int maxi = 0;

    // while(n>0){
    //     int rem = n%10;
    //     if(rem > maxi){
    //         maxi = rem;
    //     }
    //     n = n/10;
    // }
    // cout << maxi << endl;


    //Count the number of occurrences of a particular digit in a number
    // int n = 12333321;
    // int target = 3;
    // int count = 0;

    // while(n>0){
    //     int rem = n%10;
    //     if(target == rem){
    //         count++;
    //     }
    //     n = n/10;
    // }
    // cout << count << endl;


    //Append Digit m After n     //n = 1234 , m = 7 --> 12347
    // int n = 1234;
    // int m = 77;
    // int ans = 0;
    // int mDigits = 0;

    // int temp = m;
    // while(temp>0){
    //     temp = temp/10;
    //     mDigits++;
    // }

    // int divi = 1;
    // while(mDigits--){
    //     divi *= 10;
    // }
   
    // ans = (n*divi) + m;
    // cout << ans << endl;


    // //Prepend m Before n   // n=1234, m=77 → 771234
    // int n = 1234;
    // int m = 77;
    // int ans = 0;
    // int nDigits = 0;

    // int temp = n;
    // while(temp > 0){
    //     temp = temp / 10;
    //     nDigits++;
    // }

    // int divi = 1;
    // while(nDigits--){
    //     divi *= 10;
    // }

    // ans = (m * divi) + n;
    // cout << ans << endl;

    
    //Replace Last Digit of n with m	//n=1234, m=7 → 1237
    // int n = 1234;
    // int m = 7;

    // n = n/10;
    // n = (n*10) + m;
    // cout << n << endl;



    //Replace Last k Digits of n with m	   //n=1234, m=77 → 1277
    // int n = 1234;
    // int m = 77;
    // int ans = 0;
    // int mDigits = 0;

    // int temp = m;
    // while(temp>0){
    //     temp = temp/10;
    //     mDigits++;
    // }

    // int divi = 1;
    // int count = mDigits;
    // while(count--){
    //     divi *= 10;
    // }
    
    // while(mDigits--){
    //     n = n/10;
    // }

    // ans = (n * divi) + m;
    // cout << ans << endl;


    //Smallest and Largest Digit	//n=1234 → Min:1, Max:4
    int n = 1298934;
    int mini = INT_MAX;
    int maxi = 0;

    while(n > 0){
        int rem = n % 10;
        if(rem > maxi){
            maxi = rem;
        }
        if(rem < mini){
            mini = rem;
        }
        n = n/10;
    }

    cout << maxi << "   " << mini << endl;

    return 0;
}