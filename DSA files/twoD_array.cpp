#include<iostream>
#include<limits.h>

using namespace std;

// int main (){

//     int arr [3] [3] ;

//     int brr [3] [3] = {{1,2,3}, {4,5,6}, {7,8,9}};

//   // row wise printing
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout << brr[i] [j] << " ";
//     }
//     cout << endl;
//   }  

//   cout << endl;

// // column wise printing
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout << brr[j] [i] << " ";
//     }
//     cout << endl;
//   }  

//     return 0;
// }


// int main(){
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;

//     // row wise input and output
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin >> arr[i] [j];
//         }

//     }


//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout <<  arr[i] [j] << " ";
//         }

//         cout << endl;
//     }

//     // col wise i/p & o/p
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin >> arr[j] [i];
//         }

//     }


//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout <<  arr[i] [j] << " ";
//         }

//         cout << endl;
//     }

// }


// ROW SUM


// void rowWiseSUM(int arr[][3], int rows, int cols){
//     cout << "Printing row wise sum : " << endl ;
//     for(int i=0;i<rows;i++){
//         int sum=0;
//         for(int j=0;j<cols;j++){
//             sum=sum+arr[i][j];

//         }

//         cout <<  sum << " " << endl ;
//     }

// }

// int main(){
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;

//     // row wise input and output
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin >> arr[i] [j];
//         }

//     }


//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout <<  arr[i] [j] << " ";
//         }

//         cout << endl;
//     }

//     rowWiseSUM(arr,rows,cols);
// }



// COL WISE SUM
// void colWiseSUM(int arr[][3], int rows, int cols){
//     cout << "Printing col wise sum : " << endl ;
//     for(int i=0;i<rows;i++){
//         int sum=0;
//         for(int j=0;j<cols;j++){
//             sum=sum+arr[j][i];

//         }

//         cout <<  sum << " " << endl ;
//     }

// }

// int main(){
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;

//     // row wise input and output
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin >> arr[i] [j];
//         }

//     }


//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout <<  arr[i] [j] << " ";
//         }

//         cout << endl;
//     }

//     colWiseSUM(arr,rows,cols);
// }


// LINEAR SEARCH
// bool findKey(int arr[][3], int rows , int cols , int key){
//     for (int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if (key == arr[i][j]){
//                 return true;
//             }

//         }
    
//     }
//     return false ; 
            
// }
// int main(){
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;

//     // row wise input and output
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin >> arr[i] [j];
//         }

//     }


//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout <<  arr[i] [j] << " ";
//         }

//         cout << endl;
//     }
//     int key = 8;
//     if(findKey(arr,rows,cols,key)){
//         cout << "True" ;
//     }
//     else 
//         cout << " FALSE";


// }



// maximum number
// int getMax(int arr[][3],int rows,int cols){
//     int maxi=INT_MIN;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]>maxi){
//                 maxi=arr[i][j];
//             }
//         }
//     }
//     return maxi;

// }
// int main(){
//     int arr [3] [3]= {{1,2,3}, {4,5,6} ,{7,8,9}};
//     int rows=3;
//     int cols=3;

//     cout << getMax(arr,rows,cols);

// }


// Minimun num
// int getMin(int arr[][3],int rows,int cols){
//     int mini=INT_MAX;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]<mini){
//                 mini=arr[i][j];
//             }
//         }
//     }
//     return mini;

// }
// int main(){
//     int arr [3] [3]= {{1,2,3}, {4,5,6} ,{7,8,9}};
//     int rows=3;
//     int cols=3;

//     cout << getMin(arr,rows,cols);

// }


// TRANSPOSE PENDING



