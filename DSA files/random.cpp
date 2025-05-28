 #include<iostream>
 #include<vector>
using namespace std;
// #include<iostream>

// using namespace std;

// //binary search

// int binarySearch(int arr[],int size,int target){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;

//     while(start<=end ){
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(arr[mid]>target){
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
//     int target=1;

//     int indexOfTarget = binarySearch(arr,size,target);

//     if(indexOfTarget ==-1){
//         cout << "Not Found";
//     }
//     else{
//         cout << "Element found at " << indexOfTarget << " index";
//     }

//     return 0;
// }
// // int main (){
// //     vector<int> arr{0,1,1,0,1,0,1,0,1,0};
// //     int start=0;
// //     int end=arr.size()-1;
// //     int i=0;

// //     while(i!=end){

// //         if(arr[i]==0){
// //             swap(arr[start],arr[i]);
        
// //             start++;
// //             i++;
// //         }
// //         else{
// //             swap(arr[end],arr[i]);
// //             end--;
// //         }
// //     }


// //     for(auto value : arr ){
// //             cout << value << " ";
// //         }




// //     return 0;

// // }
// int main (){
// //  int n;
// //  cin >> n;
// //  for (int row =0;row<n;row+=1){
// //      for(int col=0;col<row+1;col+=1){
// //          cout << col+1;
// //      }
// //      cout << endl;
// //  }
// int n;
// cin >> n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<(n-row);col++){
//         cout << "* ";
//     }

//     cout<< endl;
// }
// }

int binary_search(vector<int> arr, int target){
    int s=0;
    int e=arr.size()-1;
    

    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(mid>s && arr[mid-1]==target){
            return mid-1;
        }
        if(mid<e && arr[mid+1]==target){
            return mid+1;
        }
        if(target>arr[mid]){
            s=mid+2;
        }
        else{
            e=mid-2;
        }
    }
    return -1;

}
int main(){
    vector<int> arr{10,3,40,20,50,80,70};
    int target=2;

    int ans= binary_search( arr,target);
    
     if (ans != -1) {
        cout << "Index of " << target << " is " << ans << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }
    return 0;
}