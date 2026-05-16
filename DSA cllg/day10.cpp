#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        while(s <= e){
            int mid = s + (e-s)/2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                e = mid-1;
            }
            else{
                s = mid + 1;
            }
        }

        return -1;
}

int lastOcc(vector<int>& nums, int target){
    int ans = -1;
    int s = 0;
        int e = nums.size()-1;
        while(s <= e){
            int mid = s + (e-s)/2;

            if(nums[mid] == target){
                ans = mid;
                s = mid + 1;
            }
            else if(nums[mid] > target){
                e = mid-1;
            }
            else{
                s = mid + 1;
            }
        }

        return ans;
}

int firstOcc(vector<int>& nums, int target){
    int ans = -1;
    int s = 0;
        int e = nums.size()-1;
        while(s <= e){
            int mid = s + (e-s)/2;

            if(nums[mid] == target){
                ans = mid;
                e = mid - 1;
            }
            else if(nums[mid] > target){
                e = mid-1;
            }
            else{
                s = mid + 1;
            }
        }

        return ans;
}

int countOcc(vector<int>& nums, int target){
    int c = lastOcc(nums , target) - firstOcc(nums , target) + 1;

    return c;
}

int main (){
    // vector<int> nums = {1,2,3,4,5,6,7,8};
    // int target = 7;
    // cout << binary_search(nums, target);

    vector<int> nums = {1,2,3,4,4,4,4,4,4,5,6};
    int target = 4;

    // cout << lastOcc(nums,target) << endl;
    // cout << firstOcc(nums,target) << endl;
    cout << countOcc(nums,target) << endl;

    return 0;
}