#include<iostream>
using namespace std;


// EXPONENTIAL SEARCH
// int bs(int a[],int start, int end,int x){
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(a[mid]==x){
//             return mid;
//         }
//         else if(x<a[mid]){
//             end =mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return -1;
// }

// int expSORT(int a[], int n, int x){
//     if(a[0]==x){
//         return 0;
//     }
//     int i=1;
//     while(i<n && a[i]<=x){
//         i=i*2;
//     }
//     return bs(a,i/2,min(i,n-1),x);
// }

// int main(){
//     int a[]={3,4,5,6,11,13,14,15,56,70};

//     int n = sizeof(a)/sizeof(int);
//     int x;
//     cout << "Enter x: ";
//     cin >> x;
//     int ans=expSORT(a,n,x);

//     cout << ans << endl;

//     return 0;
// }


// unbounded binary search
#include<iostream>
using namespace std;

int bs(int a[],int start, int end,int x){
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(x<a[mid]){
            end =mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int expSORT(int a[], int n, int x){
    if(a[0]==x){
        return 0;
    }
    int i=0;
    int j=1;
    while(a[j]<=x){
        i=j;
        j=j*2;
    }
    return bs(a,i,j,x);
}

int main(){
    int a[]={3,4,5,6,11,13,14,15,56,70};

    int n = sizeof(a)/sizeof(int);
    int x;
    cout << "Enter x: ";
    cin >> x;
    int ans=expSORT(a,n,x);

    cout << ans << endl;

    return 0;
}