#include <iostream>
using namespace std;

// int main(){
    // char name [100];
    // cout << "ENTER ur name ";
    // cin >> name;
    // cout << name  << endl;
    // char ch[100];
    // ch[0]='a';
    // ch[1]='d';
    // cin >> ch[10];
    // cout << ch[0] << ch[1] << ch[10];


    // char name[100];
    // cin >> name;;

    // for(int i=0;i<6;i++){
    //     cout << "index :" << i << " value: " << name[i] << endl;
    // }

    // int value = (int)name[5];
    // cout << value;

    // char arr[100];
    // cin.getline(arr,50);

    // cout<< arr << endl;

    // cin >> arr[2];

    // cin >> arr[49];
    // cin >> arr;
    // cin.getline(arr,70);
    // cout << arr << endl;

// }


// length of string
// int getLenght(char name[]){
//     int length=0;
//     int i=0;
//     while(name[i] != '\0'){
//         length++;
//         i++;
//     }
//     return length;
// }



// // reverse chararray
// void reverseCharArray(char name[]){
//     int i=0;
//     int size=getLenght(name);
//     int j=size-1;

//     while(i<=j){
//         swap(name[i],name[j]);
//         i++;
//         j--;
//     }
    
// }


// replace spaces by @
// void replaceSpaces(char sentence[] ){
//     int i=0;
//     int n=strlen(sentence);
//     for( i=0;i<n;i++){
//         if(sentence[i]== ' '){
//             sentence[i]='@';
//         }
//     }
// }

// int main(){
    // char name[100];
    // cin >> name;
    // cout << "length hai " << getLenght(name) << endl;
    // cout << "LENGTH HAI " << strlen(name) << endl;

    // cout << "Before: " << name <<endl ;
    // reverseCharArray(name);
    // cout << "After: " << name ;

//     char sentence[200];
//     cout << "Sentence Likh" << endl;
//     cin.getline(sentence,169);
//     replaceSpaces(sentence);
//     cout << "AFTER: " << sentence << endl;
//     return 0;
// }


// palindrome 
// bool checkPalindrome(char name[]){
//     int i=0;
//     int n=strlen(name);
//     int j=n-1;

//     while(i<=j){
//         if (name[i]!=name[j]){
//             return false;
//         }
//         else{
//             i++;
//             j--;
//         }
//     }
//     return true;

// }
// int main(){
//     char name[100];
//     cout << "Naam likh: ";
//     cin >> name;
   
//     if(checkPalindrome(name)){
//         cout << "It's Palindrome";
//     }
//     else{
//         cout << "chal dusra naam daal ";
//     }

//     return 0;
// }


// convert to uppercase 
// void convertToUpperCase(char arr[]){
//     int n =getLenght(arr);

//     for (int i=0;i<=n;i++){

//         arr[i]=arr[i]-'a'+'A';
//     }
// }

// int main (){
//     char arr[100] = "dhruv";
//     convertToUpperCase(arr);
//     cout << arr << endl;

//     return 0;
// }



//convert to lowercase
// void convertToLowerCase(char arr[]){
//     int n =getLenght(arr);
//     for (int i=0;i<=n;i++){
//         if(arr[i]>='A' && arr[i]<='Z'){
//             arr[i]=arr[i] -'A' +'a';
//         }
//         else {
//             arr[i]=arr[i];
//         }
        
//     }
// }

// int main (){
//     char arr[100] = "DhruV";
//     convertToLowerCase(arr);
//     cout << arr << endl;

//     return 0;
// }