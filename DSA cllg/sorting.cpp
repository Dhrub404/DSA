#include<iostream>
using namespace std;

// int main(){

//     //selection sort
//     // int arr[5] = {5,4,3,2,1};
//     // int n = 5;
//     // for(int i=0;i<n;i++){
//     //     for(int j = i+1;j<n;j++){
//     //         if(arr[j] > arr[j]){
//     //             swap(arr[i],arr[j]);
//     //         }
//     //     }
//     // }
//     // for(int i=0;i<n;i++){
//     //     cout << arr[i] << " ";
//     // }
//     // cout << endl;

//     //selection sort 2nd way    //but only for decending order array not mixed one
//     // int arr[5] = {5,4,3,2,1};
//     // int n = 5;
//     // for(int i=0;i<n;i++){
//     //     int min = i;
//     //     for(int j = i+1;j<n;j++){
//     //         if(arr[j] < arr[min]){
//     //             min = j;
//     //         }
//     //     }
//     //     // swap(arr[i] ,arr[min]);
//     //     arr[i] = arr[i]+arr[min]-(arr[min]=arr[i]);
//     // }
//     // for(int i=0;i<n;i++){
//     //     cout << arr[i] << " ";
//     // }
//     // cout << endl;

//     //selection sort
//     // int arr[6] = {6,1,4,9,1,3};
//     // int n = 6;
//     // for(int i=0;i<n/2;i++){
//     //     for(int j = i+1;j<n/2;j++){
//     //         if(arr[i] > arr[j]){
//     //             swap(arr[i],arr[j]);
//     //         }
//     //     }
//     // }
//     // for(int i=0;i<n;i++){
//     //     cout << arr[i] << " ";
//     // }
//     // cout << endl;

//     //selection sort
//     // int arr[6] = {6,1,4,9,1,3};
//     // int n = 6;
//     // for(int i=n/2;i<n;i++){
//     //     for(int j = i+1;j<n;j++){
//     //         if(arr[i] > arr[j]){
//     //             swap(arr[i],arr[j]);
//     //         }
//     //     }
//     // }
//     // for(int i=0;i<n;i++){
//     //     cout << arr[i] << " ";
//     // }
//     // cout << endl;


//     //selection sort
//     int arr[6] = {6,1,4,9,1,3};
//     int n = 6;
//     int index = 2;
//     int i = index;
//     for(int i=index;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i%n] > arr[j%n]){
//                 swap(arr[i%n],arr[j%n]);
//                 // arr[i] = arr[i]+arr[j]-(arr[j]=arr[i]); 
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

    
// }

int main(){
    int arr[5] = {5,4,3,2,1};
    int n = 5;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}