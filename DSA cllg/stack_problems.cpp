#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){

    int arr[7] = {7,24,49,6,3,2,9};
    int n = 7;

    stack<int> st;
    vector<int> ans(n);

    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[i] >= st.top()){
            st.pop();
        }

        if(st.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }

    return 0;
}