#include<iostream>
#include<limits.h>
using namespace std;
// int main(){
    // int arr[]={1,2,7,9,5};
    // cout << arr[2] << endl;

    // printing all values
    // for(int index=0;index<5;index++){
    //     cout << arr[index] << " ";
    // }

    // taking input in array using loop
    // int arr[10];
    // cout << "Enter the values in array " << endl;
    // for(int i=0;i<10;i++){
    //     int n;
    //     cin >> n;
    //     arr[i]=n;
    //     cout << arr[i] << " ";
    // }

    // make the output elements double
    // int arr[5];
    // cout << "Enter the values in array " << endl;
    // for(int i=0;i<5;i++){
    //     int n;
    //     cin >> n;
    //     arr[i]=n;
    // }

    // cout << "The Elements after Doubling"<< endl;
    // for(int i=0;i<5;i++){
    //     cout << arr[i]*2 << " ";
    // }


    // replace all elements with 1
    // int arr[5]={1,3,5,7,9};
    // for(int i=0;i<5;i++){
    //      arr[i]=1;
    // }
    // for(int i=0;i<5;i++){
    //      cout << arr[i] << " ";
    // }
    // return 0;
// }

// linear search
// bool  linearSearch(int arr[],int size,int key){
//     for(int i=0;i<5;i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;
// }
//     int main(){
//         int arr[5]={1,4,6,9,3};
//         int size=5;
//         int key;
//         cout << "Enter the value to find" << endl;
//         cin >> key;
//         if(linearSearch(arr,size,key)){
//             cout << "Found";
//         }
//         else {
//             cout << "Not Found";
//         }
//     }


// LIINEAR SEARCH BY METHOD 2
// int main (){
//     int arr[]={1,4,7,9,3,5};
//     int size =6;
//     int key = 6;
//     bool flag =0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             flag =1;
//         }
//     }

//     if(flag==1){
//         cout << "Found";
//     }
//     else {
//         cout << "Not Found";
//     }
// }


// COUNT NUM OF ZEROS AND ONES
// int main(){
//     int arr[]={0,1,1,0,1,0,1,0,0,1,0,1,0};
//     int size=12;
//     int numZero=0;
//     int numOne=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0 ){
//             numZero++;
//         }
//         if(arr[i]==1){
//             numOne++;
//         }
        
//     }
//     cout << numZero << endl;
//     cout << numOne << endl;


//     return 0;

// }



// FIND MAX NUMBER
// int main(){
//     int arr[]={1,4,7,3,5,9,0};
//     int size=7;
//     int maxNum= INT_MIN ;

//     for(int i=0;i<size;i++){
//         if(arr[i]>maxNum){
//             maxNum=arr[i];
//         }
//     }

//     cout << maxNum << endl;
// }

// FIND MINI NUM.
// int main(){
//     int arr[]={1,4,7,3,5,9,-1};
//     int size=7;
//     int miniNum= INT_MAX ;

//     for(int i=0;i<size;i++){
//         if(arr[i]<miniNum){
//             miniNum=arr[i];
//         }
//     }

//     cout << miniNum << endl;
// }

// PRINT EXTREME VALUES
// int main(){
//     int arr[]={1,4,7,9,5,2,8,};
//     int size=7;
//     int start=0;
//     int end=size-1;
//     while(start<=end){
//         if(start>end){
//             break;
//         }

//         if(start==end){
//             cout << arr[start] << " ";
//         }
//         else{
//             cout << arr[start]<< " ";
//         cout << arr[end] << " ";
//         }

//         start++;
//         end--;
        
//     }
    
//     return 0;
// }

// reverse array
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,};
//     int size=8;
//     int start=0;
//     int end=size-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);

        

//         start++;
//         end--;
        
//     }

//     for(int i=0;i<size;i++){
//         cout << arr[i] << " " ;
//     }
    
//     return 0;
// }