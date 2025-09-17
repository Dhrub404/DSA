#include<iostream>
#include<math.h>
#include<limits.h>
#include<vector>
using namespace std;


//FACTORIAL
// int factorial(int n){
//     if(n==0 || n==1)  return 1;

//     return n * factorial(n-1);
// }
// int main (){
//     int n;
//     cout << "Enter n" << endl;
//     cin >> n;

//     int ans = factorial(n);
//     cout << "Factorial is : " << ans << endl;
// }

//FIBONACCI SERIES
// int fibonacci (int n){
//     // if (n==0 || n==1){
//     //     return n;
//     // }
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     return (fibonacci(n-1)+fibonacci(n-2));

// }

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;

//     int ans=fibonacci(n);
//     cout << ans << endl;
// }


//STAIRS COUNT no of ways
// int countStairs(int n){
//     //base conditioh
//     if(n==0 || n==1){
//         return 1;
//     }

//     return (countStairs(n-1) + countStairs(n-2));
// }
// int main(){
//     int n;
//     cout << "Enter n : " ;
//     cin >> n;
//     int ans = countStairs(n);
//     cout << ans;


//     return 0;
// }


//Print Array  using index i
// void print (int arr[] , int n , int i ){
//     //base case
//     if(i>=n){
//         return;
//     }

//     cout << arr[i] << " ";

//     print(arr,n,i+1);

//     //cout << arr[i] << " "; //if we place cout below func. call it will print reverse array
// }

// int main(){
//     int arr[5]={10,20,30,40,50};
//     int n = 5;
//     int i=0;
//     print(arr,n,i);


//     return 0;
// }


//Print Array  without using index i
// void print (int arr[] , int n ){
//     //base case
//     if(n==0){
//         return;
//     }
//     cout << arr[0] << " ";

//     return print(arr+1,n-1);
// }

// int main(){
//     int arr[5]={10,20,30,40,50};
//     int n = 5;
//     int i=0;
//     print(arr,n);


//     return 0;
// }


// //MAximum Element in an Array
// void findMaxi(int arr[] , int n , int i , int & maxi){
//     if(i>=n){
//         return;
//     }

//     if(arr[i]>maxi){
//         maxi=arr[i];
//     }

//     findMaxi(arr,n,i+1,maxi);
// }

// int main(){
//     int arr[7]={10,88,99,66,77,22,101};
//     int n=7;
//     int maxi = INT_MIN;
//     int i=0;

//     findMaxi(arr,n,i,maxi);

//     cout << maxi << endl;

//     return 0;
// }


//Minimum Element in an Array
// void findMini(int arr[] , int n , int i , int & mini){
//     if(i>=n){
//         return;
//     }

//     // if(arr[i]<mini){
//     //     mini=arr[i];
//     // }
//     mini = min(mini,arr[i]);

//     findMini(arr,n,i+1,mini);
// }

// int main(){
//     int arr[7]={10,88,99,66,77,22,101};
//     int n=7;
//     int mini = INT_MAX;
//     int i=0;

//     findMini(arr,n,i,mini);

//     cout << mini << endl;

//     return 0;
// }


// //FInd Key in a STring
// bool findKey(string& s , int& n ,int i, char& key){
//     if(i>=n){
//         return false;
//     }

//     if(s[i]==key){
//         return true ;
//     }
//     // int new_i = i+1;   //use this when u want to use i by refernce
//     return findKey(s,n,i+1,key);
   
// }

// int main(){
//     string s = "dhruvmahajan";
//     int i=0;
//     int n= s.length();
//     char key = 'v';

//     bool ans = findKey(s,n,i,key);
//     if(ans){
//         cout <<"Found" << endl;
//     }
//     else{
//         cout << "Not found";
//     }
// }


//FInd Key in a STring (index of the key)
// int findKey(string& s , int& n ,int i, char& key,vector<int> &ans){
//     if(i>=n){
//         return -1;
//     }

//     if(s[i]==key){
//         ans.push_back(i) ;
//     }
//     // int new_i = i+1;   //use this when u want to use i by refernce
//     return findKey(s,n,i+1,key,ans);
   
// }

// int main(){
//     string s = "dhruvmahajan";
//     int i=0;
//     int n= s.length();
//     char key = 'h';
//     vector<int> ans;
//     findKey(s,n,i,key,ans);

//     for(auto val: ans){
//         cout << val << " ";
//     }
    
// }


//Print all the digits in a number
// void print(int n){
//     if(n==0){
//         return;
//     }
//     int newValue=n/10;
//     print(newValue);

//     int digit = n%10;
//     cout <<digit << " ";
// }
// int main(){
//     int n=657;

//     print(n);
// }


//CHeck Array is sorted or not
// bool checkSort(vector<int> &arr, int& n ,int i){
//     if(i==n-1){
//         return true;
//     }
//     if(arr[i]>arr[i+1]){ 
//         return false;
//     }
//     return checkSort( arr ,n ,i+1);

// }

// int main(){
//     vector<int>arr{10,20,40,60};
//     int n= arr.size();
//     int i=0;

//     bool ans = checkSort(arr,n,i );
//     if(ans){
//         cout << "Sorted";
//     }
//     else{
//         cout << " Not Sorted";
//     }
// }


//BINARY SEARCH USING RE
// int binarySearch(vector<int> &arr, int s ,int e , int& target){
//     //base cases
//     // case->1 target not found
//     if(s>e){
//         return -1;
//     }

//     int mid = (s+e)/2;

//     //case->2 target found
//     if(arr[mid]==target){
//         return mid;
//     }

//     //right search
//     if(target>mid){
//         return binarySearch(arr,mid+1,e,target);
//     }

//     //left search
//     else{
//         return binarySearch(arr,s,mid-1,target);
//     }

//     //using ternary operator
//     // return target>mid ? binarySearch(arr,n,mid+1,e,target) : binarySearch(arr,n,s,mid-1,target);

// }

// int main(){
//     vector<int> arr{1,2,3,4,5,6,7,8,9};
//     int target = 8;
//     int n =arr.size();
//     int s=0;
//     int e = n-1;

//     int ans=binarySearch(arr,s,e,target);
//     cout << ans ;
// }


//Subsequence of a string 
// void findSubsequences(string s , string output , int i){
//     //base case
//     if(i>=s.length()){
//         cout << output << endl;
//         return;
//     }

//     //exclude
//     findSubsequences(s,output,i+1);

//     //include
//     output.push_back(s[i]);
//     findSubsequences(s,output,i+1);
//     //output.pop_back()     //use this line if u want to use include before the exclude command

// }

// int main(){
//     string s = "abc";
//     string output = "";
//     int i=0;

//     findSubsequences(s,output,i);

//     return 0;
// }


//Subsequence of a string (using vector)
// void findSubsequences(string s ,string output , vector<string>& v , int i){
//     //base case
//     if(i>=s.length()){
//         v.push_back(output);
//         return;
//     }

//     //exclude
//     findSubsequences(s,output,v, i+1);

//     //include
//     // output.push_back(s[i]);  //using output+s[i] in below statement(same works)
//     findSubsequences(s,output+s[i],v,i+1);
//     //output.pop_back()     //use this line if u want to use include before the exclude command

// }

// int main(){
//     string s = "abc";
//     string output = "";
//     vector<string> v;
//     int i=0;

//     findSubsequences(s,output,v,i);
//     cout << "Printing all the subsequences  : " << endl;
//     for(auto val : v ){
//          cout << val << " ";
//     }
//     cout << endl;
//     cout << "Size of vector  : " << v.size();

//     return 0;
// }


//minimum mo. of elements required to find the sum
// int solve(vector<int>arr , int target ){
//     //base case
//     if(target==0){
//         return 0;
//     }
//     if(target<0){
//         return INT_MAX;
//     }

//     int mini=INT_MAX;
//     int n = arr.size();

//     for(int i=0;i<n;i++){
//         int ans = solve(arr,target-arr[i]);
//         if(ans!=INT_MAX){
//             mini = min(mini,ans+1);
//         }
//     }
//     return mini;
    
// }

// int main(){
//     vector<int> arr{1,2,};
//     int target = 5;
   

//     int ans = solve(arr,target);
//     cout << ans << endl;

// }


//MAXIMUM number of segments (rod)
// int solve(int n , int x , int y , int z){
//     if(n==0){
//         return 0;
//     }
//     if(n<0){
//         return INT_MIN;
//     }

//     int ans1 =  solve(n-x,x,y,z) +1;
//     int ans2 =  solve(n-y,x,y,z) +1;
//     int ans3 =  solve(n-z,x,y,z) +1;

//     int maxi = max(ans1 , max(ans2,ans3));

//     return maxi;

// }

// int main(){
//     int n=7;
//     int x=5;
//     int y =2;
//     int z = 2;

//     int ans = solve(n,x,y,z);

//     if(ans<0){
//         cout << 0;
//     }
//     else{
//         cout << ans;
//     }
// }

//MAXIMUM SUM of Non-Adjacent ELements
// void MaxSum(vector<int> arr, int sum , int i , int& maxi){
//     if(i>=arr.size()){
//         maxi = max(sum,maxi);
//         return;
//     }

//     //include
//     MaxSum(arr,sum+arr[i],i+2,maxi);

//     //exclude
//     MaxSum(arr,sum,i+1,maxi);
    
// }
// int main(){
//     vector<int> arr{2,1,4,9};
//     int sum = 0;
//     int i=0;
//     int maxi = INT_MIN;

//     MaxSum(arr,sum ,i,maxi);
//     cout << maxi ;
// }


// //Last Occurance of a CHAR in a String    //(METHOD ! -> left to right )
// void LastOccLtR(string& s , char &x , int i , int& ans){
//     if(i>=s.size()){
//         return;
//     }

//     if(s[i]==x){
//         ans=i;
//     }

//     LastOccLtR(s,x,i+1,ans);
// }

// int main(){
//     string s;
//     cout << "Enter string : ";
//     cin>>s;
    
//     char x;
//     cout  << endl << "Enter char : " ;
//     cin >> x;

//     int i=0;
//     int ans=-1;

//     LastOccLtR(s,x,i,ans);

//     cout <<endl << ans;
// }


//Last Occurance of a CHAR in a String    //(METHOD ! -> right to left )
void LastOccRtL(string& s , char &x , int i , int& ans){
    if(i<0){
        return;
    }

    if(s[i]==x){
        ans=i;
        return;
    }

    LastOccRtL(s,x,i-1,ans);
}

int main(){
    string s;
    cout << "Enter string : ";
    cin>>s;
    
    char x;
    cout  << endl << "Enter char : " ;
    cin >> x;

    int i=s.size()-1;
    int ans=-1;

    LastOccRtL(s,x,i,ans);

    cout <<endl << ans;
}