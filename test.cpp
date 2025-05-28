#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> arr, int target) {
    int s = 0;
    int e = arr.size() - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (mid > s && arr[mid - 1] == target) {
            return mid - 1;
        }
        if (mid < e && arr[mid + 1] == target) {
            return mid + 1;
        }
        if (target > arr[mid]) {
            s = mid + 2;
        } else {
            e = mid - 2;
        }
    }
    return -1;
}

int main() {
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 290;

    int ans = binary_search(arr, target);

    if (ans != -1) {
        cout << "Index of " << target << " is " << ans << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
