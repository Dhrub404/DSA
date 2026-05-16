#include <iostream>
using namespace std;

// void p(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if((i == 0 && j <= 4) || (i==n/4 && j <= n/4) || (i < 4 && j == 0) || (j == n/4 && )){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

void p5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j ==n/2||i-j == -(n/2)|| i-j == n/2 || 
            i+j == (3*n/2)-1||
            (i-j == n/2) || 
            (i+j == 3*n/4 && i<n/2&& j<=n/2) ||
            (i-j == n/4 && i>=n/2&&j<=n/2 )|| (i-j ==-(n/4) && i<=n/2 && j>n/2)||
            (i+j == (5*n/4)-1 && i>n/2&& j>n/2) 
        )
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void p2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i == n-1 || j == n-1 ||
            (i == n/4 && j >= n/4 && j<= 3*n/4)|| 
            (j == n/4 && i >= n/4 && i <= 3*n/4)|| 
            (i == 3*n/4 ) || j == 3*n/4){
                cout << "* ";
            }
            else{
                 cout << "  ";
            }
        }
        cout << endl;
    }
}

void p9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == 4*n/10 + 1|| i+j == n/2 || i-j == -n/2 ||
            j == 0 && i > 4*n/10 || j == n-1 && i> 4*n/10 ||
            (i == n-1 && j <= n/4) || (j == n/4 && i>= 7*n/10) ||
            (i == 7*n/10 && j >= n/4 && j < n/2) ||
            (j == n/2 -1 && i > 7*n/10) || (i == n-1 && j > n/2 -1) ||
            (i == 6*n/10 && j>n/2 && j != n-2) || 
            (j == 55*n/100 && i > 6*n/10) && i != n-2 ||
            (i == 8*n/10 && j >= 55*n/100 && j != n-2) ||
            (j == n-2 && i<= 8*n/10)){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void p10(int n, int m){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<m;j++){
            if(i-j >= 0 && i<n){
                cout << n-1-i+j  << " ";
            }
            else if(i+j <= 2*n-2 && i>=n){
                cout << i-n+1+j << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void p11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j <= n/2 || i-j >= n/2 || i-j <= -n/2 || i+j >= (3*n/2) - 1){
                cout << "* ";
            } 
            else{
                cout << "  "; 
            }
        }
        cout << endl;
    }
}

void p12(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || i-j >= 0 || i == n-1){
                cout << j+1 << " " ;
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int sum(int n){
    return (n*(n+1))/2;
}

void p13(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || i-j >= 0 || i == n-1){
                cout << j+1+sum(i) << " " ;
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void p14(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j == n-1 || i+j >= n-1 || i == n-1){
                cout << n-j+sum(i) << " " ;
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void p15(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2 -1;j++){
            if(i+j == n-1 || i-j == 1-n){
                cout << 1 << " "; 
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main(){
    //p(15);
    // p2(15);
    // p5(15);
    // p9(15);
    // p10(4,4);
    // p11(11);
    // p12(4);
    // p13(4);
    // p14(4);
    p15(5);
}