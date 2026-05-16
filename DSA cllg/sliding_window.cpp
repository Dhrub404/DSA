#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {1,2,8,3,6,7};
    int k = 2;
    int curr = 0;
    int maxi = 0;

    for(int i=0;i<=arr.size()-k;i++){
        curr = 0;
        for(int j=i;j<i+k;j++){ 
            curr += arr[j];
        }
        maxi = max(maxi , curr);
    }
    cout << maxi;

    // for(int i=0;i<k;i++){
    //     curr += arr[i];
    // }

    // for(int i=1;i<arr.size()-k;i++){

    // }
}