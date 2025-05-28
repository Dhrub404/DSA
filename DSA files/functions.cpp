#include<iostream>
#include<cmath>
using namespace std;

// BASIC FUNCTION 
// void printName(){
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         cout << "Hello World" << endl;
//     }
// }
// int main(){
//     printName();
// }

// SUM OF 2 NUMBERS
// int add (int a,int b){
//     int result = a+b;
//     return result;
// }
// int main(){
//     int a;
//     cout << "enter a" << endl;
//     cin >> a ;
//     int b;
//     cout << "enter b" << endl;
//     cin >> b;
//     int sum = add(a,b);
//     cout << "the result is :"<< sum << endl; 
// }


// MAXIMUM OF 3 NUMBER
// int max(int x, int y , int z){
//     if(x>y && x>z){
//         return x;
//     }
//     else if (z>x && z>y){
//         return z;
//     }
        
//     else {
//         return y;
//     }
    
// }
// int main(){
//     int a,b,c;
//     cin >> a>> b >> c;
//     int maximum = max(a,b,c);
//     cout << "the maximum of 3 number is: "<< maximum<< endl;
// }


// COUNTING 1 TO N
// void count(int x){
//     for(int i=1;i<=x;i++){
//         cout << i << " ";
//     }
//      cout <<  endl;
// }
// int main(){
//     int n;
//     cin >> n;
//     count(n);
//     return 0;
    
// }


// STUDENTS AND GRADE PROBLEM
// char getGrade(int x){

//     if(x>=90)
//         return 'A';

//     else if (x>=80)
//         return 'B';

//     else if(x>=70)
//         return 'C';

//     else if(x>=60)
//         return 'D';

//     else
//         return 'E';
// }
// int main(){
    // int marks;
    // cout << "Enter the marks : " << endl;
    // cin >> marks;
    // char FinalGrade= getGrade(marks);
    // cout << FinalGrade << endl;

// FOR ALL THE MARKS FROM 1 TO 100
    // for(int i;i<=100;i++){
    //     char ans=getGrade(i);
    //     cout << "grade for marks : " << i << " is " << ans << endl; 
    // }
    // return 0;
    
// }


// SUM OF ALL NUM UPTO N
// int getSum(int x){
//     int sum =0;
//     for(int i=0;i<=x;i++){
//         sum=sum+i;
//     }

//     return sum;
// }
// int main(){
//     int n;
//     cout << "Enter n";
//     cin >> n;
//     int ans=getSum(n);
//     cout << "sum upto N is  :" << ans << endl;
// }


// SUM OF EVEN NUM UPTO N
// int getEvenSum(int x){
//     int sum =0;
//     for(int i=0;i<=x;i=i+2){
//         sum=sum+i;
//     }

//     return sum;
// }
// int main(){
//     int n;
//     cout << "Enter n";
//     cin >> n;
//     int ans=getEvenSum(n);
//     cout << "sum upto N is  :" << ans << endl;
// }


// DECIMAL TO BINARY METHOD 1
// int decimalToBinaryM1(int n){
//     int binaryno=0;
//     int i=0;
//     while(n>0){
//         int bit=n%2;
        
//         binaryno= bit*pow(10,i++)+binaryno;
//         n=n/2;
//     }
//     return binaryno;
    
// }
// int main(){
//     int n;
//     cin >> n;
//     int binary=decimalToBinaryM1(n);
//     cout << binary << endl ;

// }


// method 2 of previous question {BITWISE METHOD}
// int decimalToBinaryM1(int n){
//     int binaryno=0;
//     int i=0;
//     while(n>0){
//         int bit=n&1;
        
//         binaryno= bit*pow(10,i++)+binaryno;
//         n=n>>1;
//     }
//     return binaryno;
    
// }
// int main(){
//     int n;
//     cin >> n;
//     int binary=decimalToBinaryM1(n);
//     cout << binary << endl ;

// }


// BINARY TO DECIMAL
// int binaryToDecimal(int n){
//     int decimal =0;
//     int i=0;
//     while(n){
//         int bit = n % 10;
//         decimal = decimal+bit*pow(2,i++);
//         n = n/ 10;
//     }
//     return decimal;
// }

// int main(){
//     int binaryno;
//     cin >> binaryno;
//     cout << binaryToDecimal(binaryno)<< endl;

//     return 0;
// }


// AREA OF CIRCLE
// float AreaOfCircle(float radius){
//     float area = 3.14 * pow(radius,2);
//     return area;
// }
// int main(){
//     float r;
//     cin >> r;
//     float result = AreaOfCircle(r);
//     cout << "The area is :" << result << endl;
     
// }

// FACTORIAL
// int Factorial(int n){
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact *=i;
//     }
//     return fact;

// }
// int main(){
//     int n ;
//     cin >> n;
//     cout<<  Factorial(n) << endl ;

// }

// PRIME NUMBER
// int numPrime(int n){
//     int i=2;
//     for(i=2;i<n;i++){

//         if(n%i==0){
//             return false;
//         }
        
//     }
//     return true ;
// }
// int main(){
//     int n;
//     cin >> n;
//     int result = numPrime(n);
//     if(result==1){
//         cout << "prime ";
//     }
//     else{
//         cout << "not prime";
//     }

// }    


// PRINT ALL PRIME NUMBER FROM 1 TO N
// bool checkPrime(int n){
//     int i=2;
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
        
//     }
//     return true;
// }


// int main (){
//     int n;
//     cin >> n;
//     for(int i=2;i<=n;i++){
//         bool isPrime=checkPrime(i);
//         if(isPrime){
//             cout << i << " ";
//         }
    
//     }
// }


// REVERSE INTEGER
// int reverseINT(int x){
//     int ans  = 0;
//     while(x>0 || x<0 ){
//         int digit =x%10;
//         ans = ans*10+digit;
//         x =x/10;
//     }
//     return ans;
// }

    
     
// int main(){
//     int n;
//     cin >> n;
//     cout << reverseINT(n) << endl;

// }