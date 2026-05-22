#include<iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

void rev(string &s, int st,int e){
    while(st<e){
        swap(s[st], s[e]);
        st++;
        e--;
    }
}

bool isVowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return true;
    }
    return false;
}

int main(){
    // string s = "Dhruv Drv"; 
    // //upper
    // for(int i=0;i<s.length();i++){
    //     if(s[i] >= 97 && s[i] <= 122){
    //         s[i] = s[i] - ' ';
    //     }
    // }
    // cout << s << endl;
    // //lower
    // for(int i=0;i<s.length();i++){
    //     if(s[i] >= 65 && s[i] <= 90){
    //         s[i] = s[i] + ' ';
    //     }
    // }
    // cout << s <<endl;

    //first letter capital
    // for(int i=0;i<s.length();i++){
    //     if(s[i] >= 97 && s[i] <= 122 && (i==0 || s[i-1] == ' ')){
    //         s[i] = s[i] - ' ';
    //     }
    // }
    // cout << s << endl;

    //vowels to uper case
    // for(int i=0;i<s.length();i++){
    //     if(s[i] >= 97 && s[i] <= 122 && (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')){
    //         s[i] -=' ';
    //     }
    // }
    // cout << s << endl;

    //swap first and last letter of every word i.e. reversed word
    // int i = 0;
    // int j = 0;
    // int n = s.length();

    // while(i<n && j <n){
    //     j++;
    //     if( s[j] == ' ' || s[j] == '\0'){
    //         swap(s[j-1], s[i]);
    //         i = j+1;
    //     }
    // }
    // cout << s << endl;

    //replace with next vowel ; a,e,i,o,u directly solve usinf if else (like if its e update with I , if a update E)
    // vector<char> ch = {'a','e','i','o','u','a'};
    // int n = s.length();
    // for(int i=0;i<n;i++){
    //     if(s[i] >= 97 && s[i] <= 122 && (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')){
    //         for(int j=0; j<5; j++){
    //             if(ch[j] == s[i]){
    //                 char c = ch[j+1];
    //                 s[i] = c - ' ';
    //                 break;
    //             }
    //         }
    //     }
    // }
    // cout << s << endl;


    //reverse every word in a string 
    // string s = "what is your name";
    // int len = s.length();
    // int st = 0;
    // for(int i=0;i<len;i++){
    //     if(i == len-1 || s[i+1] == ' '){
    //         rev(s,st,i);
    //         st = i+2;
    //     }
    // }
    // cout << s << endl;

    //hard question by sir
    // string s = "what is your name iz";
    // bool check = false;
    // int len = s.length();

    // for(int i=0;i<len;i++){
    //     if(s[i] == ' '){
    //         check = false;
    //         continue;
    //     }
    //     if(!check && isVowel(s[i])){
    //         s[i] -= 32;
    //         check = true;
    //         continue;
    //     }
    //     if(check){
    //         s[i] = 97 + (s[i]+1-97)%26;
    //     }
    //     else{
    //         s[i] -= 1;
    //     }
    // }

    // cout << s << endl;

    //

    return 0;
}