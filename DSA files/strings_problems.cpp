#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(char x, char y){
    return x>y;
}
bool compare(int a, int b){
    return a>b;
}
int main(){
    string s="babbar";
    sort(s.begin(),s.end(),cmp);

    vector<int> arr{4,3,5,2,6,1};
    sort(arr.begin(),arr.end(),compare);

    for(auto i:arr){
        cout << i << " ";
    }

    cout <<  endl;

    cout<< s;

}