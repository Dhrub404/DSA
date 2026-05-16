#include <iostream>
using namespace std;

int main(){
    //hollow right triangle
    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         if (i == 0 || i == n - 1 || j == 0 || j == i)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << endl;
    // }

    // cout << endl;

    //inverted hollow right triangle
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (j == n - 1 || i == 0 || i == j)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << endl;
    // }


    // // tilted left
    // int n = 5;
    // int m = 5;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if( j == i){
    //             cout << "* ";
    //         }else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    // // tilted right
    // int n = 5;
    // int m = 5;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if( j == n - i - 1){
    //             cout << "* ";
    //         }else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // + sign
    // int n = 5;
    // int m = 5;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         int mid = n/2;
    //         if(i == mid || j == mid){
    //             cout << "* ";
    //         }else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    // x sign pattern
    int n = 5;
    int m = 5;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if( j == i && j != 2){
                cout << "* ";
            }else{
                cout << "  ";
            }
            if( j == n - i - 1){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}