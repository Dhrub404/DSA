#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;


// OPTIMIZED SIEVE
vector<bool>Sieve(int n){
    //create a sieve array of n size asking isPrime
    vector<bool>sieve(n+1,true);
    sieve[0]=sieve[1]=false;

    for(int i=0;i<= sqrt(n);i++){         //Optimization 2
        //Reason : as if the number exceeds the sqrt of n , we will get large number, example j = 7*7=49 
        if(sieve[i]==true){
            // int j = i*2;
            int j = i*i;     //Optimization 1
            // Reason : first unmarked number would be i*i , as from 2 to (i-1) the numbers are already marked
            while(j<=n){
                sieve[j]=false;
                j+=i;
            }
        }
    }
    return sieve;
}

// int main(){
//     vector<bool>sieve=Sieve(25);
//     for(int i=0;i<=25;i++){
//         if(sieve[i]){
//             cout << i << " " ;
//         }
//     }

// }



//SEGMENTED SIEVE
vector<bool>Seg_sieve(int L , int R){
    // used to get prime array, I will use it to mark segmented sieve
    vector<bool>sieve=Sieve(sqrt(R));
    vector<int>basePrimes;

    for(int i=0;i<sieve.size();i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }

    vector<bool>Seg_sieve(R-L+1, true);
    if(L == 0 || L==1){
        Seg_sieve[L]=false;
    }

    for(auto prime : basePrimes){
        int first_mul = (L/prime) * prime;
        if(first_mul < L){
            first_mul +=prime;
        }

        int j =  max(first_mul , prime*prime);
        while (j<=R){
            Seg_sieve[j-L]=false;
            j+= prime;
        }

    }
    return Seg_sieve;


}


int main(){
    int L=110;
    int R=130;

    vector<bool>ss=Seg_sieve(L,R);
    for(auto i=0;i<ss.size();i++){
        if(ss[i]){
            cout << i+L << " ";
        }
    }

}