#include<iostream>

using namespace std;


// MERGE SORT
// void merge(int* arr , int s ,int e){
//     int mid  = (s+e)/2;

//     //length of left and right arrray
//     int len1=mid-s+1;
//     int len2  =e-mid;

//     //create array dynamically
//     int* left = new int[len1];
//     int* right = new int[len2];

//     //copy values to respective arrays
//     int k = s;
//     for(int i=0;i<len1;i++){
//         left[i]=arr[k];
//         k++;
//     }

//     k=mid+1;
//     for(int i=0;i<len2;i++){
//         right[i]=arr[k];
//         k++;
//     }

//     //merge
//     int leftIndex=0;
//     int rightIndex=0;
//     int mainArrayIndex=s;

//     while(leftIndex < len1 && rightIndex< len2){
//         if(left[leftIndex]<right[rightIndex]){
//             arr[mainArrayIndex++] = left[leftIndex++];
//         }
//         else{
//             arr[mainArrayIndex++] = right[rightIndex++];
//         }

//     }

//     //if there are still elements pending
//     while(leftIndex<len1){
//         arr[mainArrayIndex++] = left[leftIndex++];
//     }

//     while(rightIndex<len2){
//         arr[mainArrayIndex++] = right[rightIndex++];
//     }

//     //TODO :: delete left and right named array which are newly created dinamically
// }

// void mergeSort(int* arr, int s , int e){
//     //base case
//     //single element s==e
//     //invalid array s>e
//     if(s>=e){
//         return;
//     }
//     int mid = (s+e)/2;
    
//     // left 
//     mergeSort(arr,s,mid);

//     // right 
//     mergeSort(arr,mid+1,e);

//     merge(arr,s,e);  
// }

// int main(){
//     int arr[] = {1,8,4,12,17,10,99,89};
//     int n=8;
//     int s=0;
//     int e = n-1;

//     mergeSort(arr,s,e);

//     for(int i=0;i<n;i++){
//         cout <<arr[i] << " ";
//     }

//     cout << endl;
// }


//QUICK SORT
// int partition(int arr[],int s ,int e){
//     int pivotElement = arr[s];
//     int pivotIndex = s;

//     //find right position of pivot elenment
//     int count =0;
//     for(int i =s+1;i<=e;i++){
//         if(arr[i]<=pivotElement){
//             count++;
//         }
//     }
//     int rightIndex = s+count;
//     swap(arr[pivotIndex],arr[rightIndex]);
//     pivotIndex=rightIndex;

//     //small elements in left and big one's in right
//     int i=s;
//     int j=e;

//     while(i<pivotIndex && j>pivotIndex){
//         while(arr[i]<=pivotElement){
//             i++;
//         }
//         while(arr[j]>pivotElement){
//             j--;
//         }
//     }

//     //2 case are possible 
//     //A -> u found the element to swap (lager elemnet on left side and vice versa)
//     //B -> no need to swap
//      while(i<pivotIndex && j>pivotIndex){
//         swap(arr[i] , arr[j]);
//      }
//      return pivotIndex;
// }

// void quickSort(int arr[] , int s, int e){
//     //base case
//     if(s>=e){
//         return ;
//     }

//     // pivot index
//     int p = partition(arr,s,e);

//     //left 
//     quickSort(arr,s,p-1);

//     //right
//     quickSort(arr,p+1,e);

// }

// int main(){
//     int arr[] = {8,1,3,4,20,50,30};
//     int n =7;
//     int s=0;
//     int e = n-1;

//     quickSort(arr,s,e);

//     for(int i=s;i<=e;i++){
//         cout << arr[i] << " ";
//     }

// }


