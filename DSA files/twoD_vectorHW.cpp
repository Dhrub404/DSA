#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std ;


// ALL -VE NUMS ON L.H.S.
// int main (){
//     vector <int> arr {1,2,4,-7,-3,6,-9,11,13,-4,16};
//     int l=0;
//     int h=arr.size()-1;
//     while(l<h){
//         if(arr[l]<0){
//             l++;
//         }
//         else if(arr[h]>0){
//             h--;
//         }
//         else{
//             swap(arr[h],arr[l]);
            
//         }
    
//     }
//     for(int i=0;i<arr.size();i++){
//         cout << arr[i] << " ";
//     }

//     return 0;

// }

// missing element from an array with duplicates
// void findMissing(int *a,int n){
// // visited method
//     for(int i=0;i<n;i++){
//         int index=abs(a[i]);
//         if(a[index-1]>0){
//             a[index-1]*=-1;
//         }
        
//     }


//     // for(int i=0;i<n;i++){
//     //         cout << a[i] << " ";
//     //     }

//     for(int i=0;i<n;i++){
//         if(a[i]>0){
//             cout << i+1 << " ";
//         }
//     }
    
// }
// int main(){
//     int a[]={1,3,5,3,4};
//     int n=sizeof(a)/sizeof(int);
//     findMissing(a,n);


//     return 0;
// }

// swapping and sorting method
// void findMissing(int *a, int n){
//     int i=0;
//     while(i<n){
//         int index=a[i]-1;
//         if(a[index]!=a[i]){
//             swap(a[index],a[i]);
//         }
//         else{
//             i++;
//         }
        
//     }

//     // for(int i=0;i<n;i++){
//     //         cout << a[i]<< " ";
//     //     }
//     for(int i=0;i<n;i++){
//         int index=a[i]-1;
//         if(a[index]!=i+1){
//             cout << index << " ";
//         }
//     }

// }
// int main(){
//     int a[]={1,3,5,3,4};
//     int n=sizeof(a)/sizeof(int);
//     findMissing(a,n);

//     return 0;
// }

// common elements in 3 sorted arrays
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
//                                vector<int> &arr3) {
//         vector<int> ans;
//         set<int> st;
//         int i, j, k;
//         i = j = k = 0;
//         while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
//             if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
//                 st.insert(arr1[i]);
//                 i++, j++, k++;
//             }
//             else if (arr1[i] < arr2[j]) {
//                 i++;
//             }
//             else if (arr2[j] < arr3[k]) {  
//                 j++;
//             }
//             else {
//                 k++;
//             }
//         }
//         for (auto i: st) {
//             ans.push_back(i);
//         }
//         return ans;
//     }
// };



// Wave Print a matrix
void wavePrintMatrix(vector<vector<int>>v){
    int m=v.size();
    int n=v[0].size();
    for(int startCol=0;startCol<n;startCol++){
        if((startCol & 1)==0){
            for(int i=0;i<m;i++){
                cout << v[i][startCol]<<" ";
            }

        }
        else {
            for(int i=m-1;i>=0;i--){
                cout << v[i][startCol] << " ";
            }
        }
    }
}
int main (){
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    wavePrintMatrix(v);
    return 0;
}
