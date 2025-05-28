#include<iostream>
#include<vector>
using namespace std;

// int main(){
    // vector<int> arr;

    // int ans=(sizeof(arr)/sizeof(int));
    // cout << ans << endl;
    // cout << "Arr Size " << arr.size() << endl;
    // cout << "Arr Capacity" << arr.capacity() << endl;

    

    // arr.push_back(5);
    // arr.push_back(7);

    // arr.pop_back();
    //  cout << "Printing Arr"<< endl;
    // for(int i=0;i<arr.size();i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;


    // // Brr
    // int n;
    
    // cout << "Enter the number of arrays to be stored" << endl;
    // cin >> n;

    // vector<int>brr(n,-1);
    //  cout << "Printing Brr"<< endl;
    // for(int i=0;i<brr.size();i++){
    //     cout <<  brr[i] << " " ;
    // }
    // cout << endl;
    // cout << "Brr Size"<< brr.size() << endl;
    // cout << "Brr Capacity" <<  brr.capacity() << endl;



    // // Crr
    // vector<int> crr {10,20,30,40};
    //  cout << "Printing Crr"<< endl;
    // for(int i=0;i<crr.size();i++){
    //     cout << crr[i] << " ";

    // }
    // cout << endl;


    // // Drr
    // vector<int> drr;
    // cout << "Vector drr is empty or not" << endl<< drr.empty() ;


//     vector<int> arr(10);
//     for(int i=0;i<arr.size();i++){

//         cout<< arr[1] << " ";
//     }
// }

// FIND UNNIQUE ELEMENT
// int findUnique(vector<int>arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans ^ arr[i];
    
//     }
    
//     return ans;

// }
// int main (){
//     int n;
    
//     cout << "Enter the size of array:" << endl ;
//     cin>> n;

//     vector<int> arr(n);

//     cout << "Enter the elements:" << endl;

//     for(int i=0;i<arr.size();i++){
//         cin >> arr[i];
//     }

//     int uniqueElement = findUnique(arr);
//     cout << uniqueElement << endl;
//     return 0;
    
// }



// UNION OF 2 ARRAY
// int main (){
//     int arr[]={1,3,5,7,9};
//     int sizea=5;
//     int brr[]={2,4,6,8};
//     int sizeb=4;


//     vector <int> ans;

//     for(int i=0;i<sizea;i++){
//         ans.push_back(arr[i]);
//     }

//     for(int i=0;i<sizeb;i++){
//         ans.push_back(brr[i]);
//     }
//     cout << "Union of 2 arrays :" ;
//     for(int i=0;i<ans.size();i++){
//     cout << ans[i] <<  " ";
//     }

//     return 0;
// }



// INTERSECTION OF TWO ELEMENTS 
// int main(){
//     vector<int> arr{1,2,3,3,4,6,8};
//     vector<int> brr{3,3,4,9,10};

//     vector<int> ans;
//     for(int i=0;i<arr.size();i++){
//         int element = arr[i];
//         for( int j=0;j<brr.size();j++){
//             if(element ==brr[j]){
//                 // mark the number for not repeating it 
//                 brr[j]=-1;
//                 ans.push_back(element);
//             }
//         }
//     }

//     for(auto value: ans){
//         cout << value << " ";
//     }



//     return 0;
// }


// UNION REMOVING DUPLICATES
// int main(){
//     vector <int> a{1,2,4,6,8,10};
//     vector<int> b{3,4,5,6};

//     vector<int> ans;

//     for(int i=0;i<a.size();i++){
//         int element = a[i];
//         if(element !=a[i]){
//             a.push_back(element);
//         }
//         else{
//                 int mark =-1;
//         }
//     }

//     for(int i=0;i<b.size();i++){
//         int element = b[i];
//         if(element !=b[i]){
//             b.push_back(element);
//         }
//         else{
//                 int mark =-1;
//         }
//     }


//     for(auto value: ans){
//         cout << value << " ";
//     }


//     return 0;

// }



//     ********** PAIR SUM ***********
// int main(){
//     vector<int> a{1,3,5,7,2,4,6};
//     vector<int> ans;
//     int sum=9;

//     for(int i=0;i<a.size();i++){
//         for(int j=i+1;j<a.size();j++){

//             if((a[i]+a[j])==sum){
//                 cout << "The pair is " << a[i] << " & " << a[j] << endl;
//             }
            

//         }
//     }
// }


// triplet pairiing sum
// int main(){
//     vector<int> a{1,3,5,7,2,4,6};
//     vector<int> ans;
//     int sum=9;

//     for(int i=0;i<a.size();i++){


//         for(int k=i+1;k<a.size();k++){


//             for(int j=k+1;j<a.size();j++){

//             if((a[i]+a[j]+a[k])==sum){
//                 cout << "The pair is " << "(" << a[i] << " , " << a[k] << " , "<< a[j] << ")" << endl;
//             }
            

//         }

//         }
        
//     }
// }


// sort 0's and 1's
// int main (){
//     vector<int> arr{0,1,1,0,1,0,1,0,1,0};
//     int start=0;
//     int end=arr.size()-1;
//     int i=0;

//     while(i!=end){

//         if(arr[i]==0){
//             swap(arr[start],arr[i]);
        
//             start++;
//             i++;
//         }
//         else{
//             swap(arr[end],arr[i]);
//             end--;
//         }

//     }

//     for(auto value : arr ){
//             cout << value << " ";
//         }




//     return 0;

// }


// 