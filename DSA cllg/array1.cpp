#include<iostream>
#include<climits>
using namespace std;

void sum(int arr[] ,int n){
    int sum = 0;
    for(int i=0;i<7;i++){
        sum += arr[i];
    }

    cout <<  sum << endl;
}

void product(int arr[] ,int n){
    int prod = 1;
    for(int i=0;i<7;i++){
        prod *= arr[i];
    }

    cout <<  prod << endl;
}
bool search(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(target == arr[i]){
            return true;
        }
    }
    return false;
}

int maxElement(int arr[], int n){
    int maxi = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int max2nd(int arr[],int n){
    int maxi = INT_MIN;
    int prev = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > maxi){
            prev = maxi;
            maxi = arr[i];
        }
        else if(prev < maxi && arr[i] > prev){
            prev = arr[i];
        }
    }
    return prev;    
}

int minElement(int arr[], int n){
    int mini = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}

void evenOddCount(int arr[], int n){
    int even = 0;
    int odd = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    cout << even << endl << odd << endl; 
}

#include <iostream>
using namespace std;

int decToBin2(int n)
{
    int ans = 0;
    int a = 1;
    while (n != 0)
    {
        ans = ans + (a * (n % 2));
        n /= 2;
        a *= 10;
    }
    return ans;
}
void replace3(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // arr[i] = decToBin2(arr[i]);
        arr[i] = decToBin2(arr[i]);
        cout << arr[i] << " ";
    }
}

void reverse(int arr[],int s, int e){
    while(s <= e){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }
}
int main(){
    int arr[7] = {1,2,3,6,7,8,9};
    int n = 7;
    int target = 1;
    // sum(arr, n);
    // product(arr,n);
    // cout << search(arr,n,target) << endl;
    // cout << maxElement(arr,n);
    // cout << minElement(arr,n);
    // cout << max2nd(arr,n);
    // evenOddCount(arr,n);
    // replace3(arr,n);    //dec to bin
    if(n%2 == 0)    reverse(arr,0 , n/2 -1);
    else{
        reverse(arr,0 , n/2);
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;



    return 0;
}