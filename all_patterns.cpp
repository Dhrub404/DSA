#include<iostream>
using namespace std;
int main (){

    //SOLID RECTANGLE


    //outer loop - row observe 
    // for(int row=0;row<3;row++){
    //     //inner loop - col observe
    //     for(int col=0;col<5;col++){
    //         cout << "* " ;

    //     }
    // cout << endl;    
    // }


    //SQUARE


        // for(int row=0;row<4;row++){

    //     for(int col=0;col<4;col++){
    //         cout << "* ";

    //     }
    // cout<< endl;    
    // }
    // int n;
    // cin >> n;
    // for(int row=0;row<n;row++){

    //     for(int col=0;col<n;col++){
    //         cout << "* ";

    //     }
    // cout<< endl;    
    // }



    //HOLLOW RECTANGLE

//     for(int row=0;row<3;row+=1){

//         if(row==0||row==2){
//             for(int col=0;col<5;col+=1){
//                 cout << "* ";
//             }

//         }

//         else{
//             cout<< "* ";
//             for(int i=0;i<3;i+=1){
//                 cout << "  ";

//             }
//             cout << "* ";
//         }
//         cout << endl;
//     }



// }

//HOLLOW RECTANGLE WITH N NO. OF ROWS AND COLS.
// int rowcount;
// int colcount;
// cin >> rowcount;
// cin >> colcount ;
// for(int row=0;row<rowcount;row+=1){

//         if(row==0||row==rowcount-1){
//             for(int col=0;col<colcount;col+=1){
//                 cout << "* ";
//             }

//         }

//         else{
//             cout<< "* ";
//             for(int i=0;i<colcount-2;i+=1){
//                 cout << "  ";

//             }
//             cout << "* ";
//         }
//         cout << endl;
//     }



// }

// HOLLOW RECTANGE WITH ANOTHER TYPE OF LOOP

// int n;
// cin >> n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<n;col++){
//         if(row==0||row==n-1||col==0||col==n-1){
//             cout << "* ";
//         }
        
//         else{
//             cout << "  " ;
//         }
        
//     }
// cout<< endl;
// }

//HALF PYRAMID 

// int n;
// cin >> n;
// for (int row =0;row<n;row+=1){
//     for(int col=0;col<row+1;col+=1){
//         cout << "* ";
//     }
//     cout << endl;
// }

// }

//INVERTED  HALF PYRAMID 

// int n;
// cin >> n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<(n-row);col++){
//         cout << "* ";
//     }

//     cout<< endl;
// }

// NUMERIC HALF PYRAMID

// int n;
// cin >> n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout << col+1 ;
//     }
//     cout << endl;
// }

// INVERTED HALF PYRAMID

// int n;
// cin >> n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col++){
//         cout << col+1 ;
//     }
//     cout << endl;
// }


// FULL PYRAMID 

//  int n;
//  cin >> n;
//  for(int row = 0;row<n;row++){
//     int k=0;
//     for(int col=0;col<((2*n)-1);col++){
//         if(col<n-row-1){
//             cout << " ";
//         }
//         else if(k<2*row+1){
//             cout << "*";
//             k++; 

//         }
//         else{
//             cout << " ";
//         }
//     }
//     cout << endl;
//  }



// HOLLOW INVERTED PYRAMID
// int n;
// cin >> n;
// for (int row=0;row<n;row++){
//     for(int col=0;col<n;col++){
//         if(row==0||col==0||col == n-row-1){
//             cout << "*";

//         }
//         else{
//             cout << " ";
//         }
//     }
//     cout << endl;
// }


//HOLLOW FULL PYRAMID
// int n;
//  cin >> n;
//  for(int row = 0;row<n;row++){
//     int k=0;
//     for(int col=0;col<((2*n)-1);col++){
//         if(col<n-row-1){
//             cout << " ";
//         }
//         else if(k<2*row+1){
//             if(k==0||k==2*row|| row==n-1){
//                 cout << "*";
//             }
//             else{
//                 cout << " ";
//             }
//             k++; 
            
//         }
//         else{
//             cout << " ";
//         }
//     }
//     cout << endl;
//  }

// FULL PYRAMID by ANOTHER METHOD
// int n;
// cin >> n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row-1;col++){
//         cout << " ";

//     }

//     for(int col=0;col<row+1;col++){
//         cout << "* ";

//     }
//     cout << endl;
// }

// INVERTED FULL PYRAMID
// int n;
// cin >> n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<row;col++){
//         cout << " ";
//     }
//     for(int col=0;col<n-row;col++){
//         cout << "* ";
//     }
//     cout << endl;
// }


// SOLID DIAMOND
// int n;
// cin >> n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row-1;col++){
//         cout << " ";

//     }

//     for(int col=0;col<row+1;col++){
//         cout << "* ";

//     }
//     cout << endl;
// }

// for(int row=0;row<n;row++){
//     for(int col=0;col<row;col++){
//         cout << " ";
//     }
//     for(int col=0;col<n-row;col++){
//         cout << "* ";
//     }
//     cout << endl;
// }


// HOLLOW DIAMOND
// int n;
// cin >> n;
// for(int row=0;row<n;row++){
//     for( int col=0;col<n-row-1;col++){
//         cout << " ";
//     }
//     for(int col=0;col<2*row+1;col++){
//         if(col==0||col==2*row){
//             cout << "*";
//         }
//         else{
//             cout << " ";
//         }
//     }
//     cout << endl;
// }

// for(int row=0;row<n;row++){
//     for(int col=0;col<row;col++){
//         cout << " ";
//     }
//     for(int col=0;col<(2*n)-(2*row)-1;col++){
//         if(col==0||col==(2*n)-(2*row)-2){
//             cout << "*";
//         }
//         else{
//             cout << " ";
//         }

//     }
//     cout << endl;
// }


// FLIPPED SOLID DIAMOND 
// int n;
// cin >> n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col++){
//         cout << "*";
//     }
//     for(int col=0;col<2*row+1;col++){
//         cout << " ";
//     }
//     for(int col=0;col<n-row;col++){
//         cout << "*";
//     }
//     cout << endl;
// }

// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout << "*";
//     }

//     for(int  col=0;col<((2*n)-(2*row)-1);col++){
//         cout << " ";
//     }

//     for(int col=0;col<row+1;col++){
//         cout << "*";
//     }
//     cout << endl;
// }  

// FANCY PATTERN #2
// int n;
// cin >> n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout << row+1;
//         if(col!=row){
//             cout << "*";
//         }
//     }
//     cout << endl;
// }

// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col++){
//         cout << n-row;
//         if(col!=n-row-1){
//             cout << "*";
//         }
        
//     }
//     cout << endl;
// }


// ALPHABET PALINDROME PYRAMID
// int n;
// cin >> n;
// for(int row =0;row<n;row++){
//     int col;
//     for(int col=0;col<row+1;col++){
//         int ans=col+1;
//         char ch= ans+'A'-1;
//         cout << ch ;
//     }
//     for(int col=row;col>=1;col=col-1){
//         int ans=col;
//         char ch= ans+'A'-1;
//         cout << ch;
//     }
//     cout << endl;
// }

// INVERTED HOLLOW PYRAMID


}






