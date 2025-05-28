#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// binary search

// int binarySearch(int arr[],int size,int target){
//     int start=0;
//     int end=size-1;
   

//     while(start<=end ){
//          int mid=start+(end-start)/2;
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(arr[mid]<target){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }

        

//     }
//     return -1;

// }

// int main(){
//     int arr[]={1,3,6,9,11,13,15};
//     int size=7;
//     int target=133;

//     int indexOfTarget = binarySearch(arr,size,target);

//     if(indexOfTarget ==-1){
//         cout << "Not Found";
//     }
//     else{
//         cout << "Element found at " << indexOfTarget << " index";
//     }

//     return 0;
// }


//vector and array with library of binary search
// int main(){
    // vector<int> v{1,2,3,4,5,6,7};
    // if(binary_search(v.begin(),v.end(),3)){
    // cout << " Found";
    // }
    // else{
    //     cout<< " Not Found";
    // }

//     int arr[]={1,2,3,4,5,6,7};
//     int size=7;

//     if(binary_search(arr,arr+size,9)){
//     cout << " Found";
//     }
//     else{
//         cout<< " Not Found";
//     }
    
// }


// FIRST OCCURANCE
// int firstOcc(vector <int> arr,int target){
//     int s=0;
//     int e=arr.size()-1;
//     int ans=-1;

//     while(s<=e){
//         int mid=s+ (e-s)/2;
//         if(arr[mid]==target){
//         ans=mid;
//         e=mid-1;        
//         }
//         else if(arr[mid]>target){
//             e=mid-1;
//         }
//         else if(arr[mid]< target){
//             s=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector <int> arr{1,2,3,3,3,3,3,4,4,4,4,4,6,7,9};
//     int target=4;
//     int ans=firstOcc(arr,target);

//     cout << " First occurance at "<< ans << " index";
// }


// LAST OCCURANCE
// int lastOcc(vector <int> arr,int target){
//     int s=0;
//     int e=arr.size()-1;
//     int ans=-1;

//     while(s<=e){
//         int mid=s+ (e-s)/2;
//         if(arr[mid]==target){
//         ans=mid;
//         s=mid+1;        
//         }
//         else if(arr[mid]>target){
//             e=mid-1;
//         }
//         else if(arr[mid]< target){
//             s=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector <int> arr{1,2,3,3,3,3,3,4,4,4,4,4,6,7,9};
//     int target=4;
//     int ans=lastOcc(arr,target);

//     cout << " Last occurance at "<< ans << " index";
// }


//total occurance
// int firstOcc(vector <int> arr,int target){
//     int s=0;
//     int e=arr.size()-1;
//     int ans=-1;

//     while(s<=e){
//         int mid=s+ (e-s)/2;
//         if(arr[mid]==target){
//         ans=mid;
//         e=mid-1;        
//         }
//         else if(arr[mid]>target){
//             e=mid-1;
//         }
//         else if(arr[mid]< target){
//             s=mid+1;
//         }
//     }
//     return ans;
// }
// int lastOcc(vector <int> arr,int target){
//     int s=0;
//     int e=arr.size()-1;
//     int ans=-1;

//     while(s<=e){
//         int mid=s+ (e-s)/2;
//         if(arr[mid]==target){
//         ans=mid;
//         s=mid+1;        
//         }
//         else if(arr[mid]>target){
//             e=mid-1;
//         }
//         else if(arr[mid]< target){
//             s=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector <int> arr{1,2,3,3,3,3,3,4,4,4,4,4,4,4,4,6,7,9};
//     int target=4;
//     int ans=firstOcc(arr,target);
//     int ans2=lastOcc(arr,target);

//     int totalOcc=ans2-ans+1;

//     cout << " Total occurance are "<< totalOcc;
// }




// find missing element



// SQUARE ROOT using BINARYY SEARCH
// int findSqrt(int n){
//     int s=0;
//     int e=n-1;
//     int ans=0;

//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(mid*mid==n){
//             return mid;
//         }
//         else if(mid*mid>n){
//             e=mid-1;
//         }
//         else if(mid*mid<n){
//             ans=mid;
//             s=mid+1;
//         }

//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<< " enter the n: ";
//     cin>>n;

//     int ans=findSqrt(n);
//     cout << ans;

//     int precision;
//     cout << endl << "Enter the number of floating digits needed" << endl;
//     cin >> precision;
//     double finalAns=ans;
//     double step=0.1;
//     for(int i=0;i<precision;i++){

//         for(double j=finalAns;j*j<=n;j=j+step){
//             finalAns=j;
           
//         }
//          step=step/10;

//     }
//     cout << "The final answer is :" << finalAns << endl;
//     return 0;
// }


// BINARY SEARCH USING 2D ARRAY
// bool binarySearch(int arr[][4],int m,int n,int target){
//     int size=m*n;
//     int s=0;
//     int e=size-1;
   

//     while(s<=e){
//         int mid=s+(e-s)/2;
//         int rowIndex=mid/n;
//         int colIndex=mid%n;
//         int element = arr[rowIndex][colIndex];
      
//         if(element==target){
//             cout << "Item found at Index" << rowIndex << " " << colIndex << endl ;
//             return true;
            
//         }
//         else if(element< target){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
//     int m=5,n=4;
//     int target =15;

//     bool ans= binarySearch(arr,m,n,target);
//     if(ans)
//         cout<< " found" << endl;
//     else
//         cout << "not found";    
// }


//binary search in a nearly sorted array 
// int binary_search(vector<int> arr, int target){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;

//     while(s<=e){
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(mid>s && arr[mid-1]==target){
//             return mid-1;
//         }
//         if(mid<e && arr[mid+1]==target){
//             return mid+1;
//         }
//         if(target>arr[mid]){
//             s=mid+2;
//         }
//         else{
//             e=mid-2;
//         }
//     }
//     return -1;

// }
// int main(){
//     vector<int> arr{10,3,40,20,50,80,70};
//     int target=290;

//     int ans= binary_search( arr,target);
    
//      if (ans != -1) {
//         cout << "Index of " << target << " is " << ans << endl;
//     } else {
//         cout << "Target " << target << " not found in the array." << endl;
//     }
//     return 0;
// }


// division using binary search
// int divide_bs(int dividend,int divisor){
//     int s=0;
//     int e=abs(dividend);
//     int ans=1;
//     while(s<=e){
//         int mid=s+ (e-s)/2;
//         if(abs(mid*divisor) == abs(dividend)){
//             ans= mid;
//             break;
//         }
//         else if(abs(mid*divisor) < abs(dividend)){
//             ans=mid;
//             s=mid+1;
            
//         }
//         else{
//             e=mid-1;
//         }
        
//     }
//     if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
//         return ans;
//     }
//     else{
//         return -ans;
//     }
// }
// int main(){

//     int divisor,dividend;
//     cout<<"Enter dividend  :";
//     cin>>dividend;
//       cout<<"Enter divisor :";
//     cin>>divisor;
//     int ans=divide_bs(dividend,divisor);
//     cout<< "Ans is " << ans;

//         int precision;
//     cout << endl << "Enter the number of floating digits needed" << endl;
//     cin >> precision;
//     double finalAns=ans;
//     double step=0.1;
//     for(int i=0;i<precision;i++){

//         for(double j=finalAns;j*divisor<=dividend;j=j+step){
//             finalAns=j;
           
//         }
//          step=step/10;

//     }
//     cout << "The final answer is :" << finalAns << endl;
//     return 0;
// }

//find the element occuring odd number of times in an array
// int find_it(vector<int> arr){
//     int s=0;
//     int e=arr.size()-1;
    
//     while(s<=e){
//         int mid=s+ (e-s)/2;
//         if(mid%2==0){
//             if (s==e){
//                 return s;
//             }
//             if(arr[mid]==arr[mid+1]){
//                 s=mid+2;
//             }
//             else{
//                 e=mid;
//             }
//         }

//         else{
//             if(arr[mid-1]==arr[mid]){
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
//         }
//     }
//     return -1;
    

// }
// int main(){
//     vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
//     int ans = find_it(arr);
//     cout<< "element is " <<arr[ans] << " at index: " << ans;
// }



// FIND PIVOT
int findPivot(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int ans=0;

    while(s<=e){
        int mid=s+ (e-s)/2;
        
        if(s==e){
            return s;
        }
        if(mid<e&&arr[mid]>arr[mid+1]){
            return mid;
        }
        if(mid>s&&arr[mid-1]>arr[mid]){
            return mid-1;
        }
        if(arr[s]>arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return -1;


}
int main(){
    vector <int> arr{9,10,2,4,6,8};
    int ans=findPivot(arr);

    cout << "Ans is " << arr[ans] << " at index " << ans;

    return 0;
}