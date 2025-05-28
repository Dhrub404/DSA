#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

int main(){
    //CREATION OF MAP
    map<int,char> helloMAP;

    //INSERTION IN MAP
    helloMAP[0]='a';
    helloMAP[3]='d';
    helloMAP[25]='z';


    //ACCESSING THE MAP VALUES
    cout << "Value is " << helloMAP[25];
}