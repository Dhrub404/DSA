#include<iostream>
using namespace std ;

// void solve(int arr[]){
//     cout << "Size inside solve function : " << sizeof(arr) << endl; 

//     cout <<arr << endl;
//     cout << &arr << endl; //diferent coz new array created

//     arr[0] = 50;
// }

void update(int *p){
    cout << "Address stored inside of p : " << p << endl;
    cout << "Address of p : " << &p << endl;
    *p = *p+10;

}
int main (){
    // int arr[5]={1,8,3,4,5};

    // cout << arr << endl;
    // cout << &arr << endl;
    // cout << &arr[0] << endl;
    // cout << arr[0] << endl;

    // int *p=arr;
    // cout << p << endl;
    // cout << &p << endl;

    // cout << *arr << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr+1) << endl;
    // cout << *(arr+2) << endl;
    // cout << *(arr+4) << endl;

    // cout << arr[1] << endl;
    // cout << *(arr+1) << endl;
    // cout << arr[2] << endl;
    // cout << *(arr+2) << endl;
    // cout << arr[3] << endl;
    // cout << *(arr+3) << endl;

    // int i=0;
    // cout << arr[i] << endl;
    // cout << *(arr+i) << endl;
    // cout << i[arr] << endl;

    // int arr[4]= {5,6,7,8};
    // int *p = arr;
    // int *q= arr+1;
    // cout << arr << endl;
    // cout << &arr << endl;
    // cout << arr[0] << endl;
    // cout << &arr[0] << endl;
    // cout << p  << endl;
    // cout << *p  << endl;
    // cout << &p  << endl;
    // cout << q << endl;
    // cout << *q << endl;
    // cout << &q << endl;
    // cout << *(p)+1 << endl;
    // cout << *(p) +2 << endl;
    // cout << *(q) +3 << endl;
    // cout << *(q) +4 << endl;
    // cout << *(q+4) << endl;
    

    // int arr[10];
    // cout << sizeof(arr) << endl;

    // int *p = arr;
    // cout << sizeof(p) << endl;
    //  cout << sizeof(*p) << endl;



    //CHAR ARRAY
    // char ch[10]= "DHRUV";
    // char *c = ch;
    // cout << c << endl;
    // cout << &c << endl;
    // cout << *c << endl;
    // cout << ch << endl;
    // cout << &ch << endl;
    // cout << *ch << endl;
    // cout << ch[0] << endl;


    // char name[10] = "SherBano";
    // char *cptr = &name[0];
    // cout  << name << endl;
    // cout  << &name << endl;
    // cout  << *(name+3) << endl;
    // cout  << cptr << endl;
    // cout  << &cptr << endl;
    // cout  << *(cptr+3) << endl;
    // cout  << cptr+2 << endl;
    // cout  << *cptr << endl;
    // cout  << cptr+8 << endl;


    //single character example 
    // char ch = 'k';
    // char *cptr = &ch;
    // cout << cptr << endl;


    // char ch[10] = "Dhruv";
    // char *c = "Dhruv";
    // cout << ch << endl; //good practice
    // cout  << c << endl; //bad practice


    //passing array in function (in function when array is passed , it is passed as a pointer ){Pass by reference}
    // int arr [10] = {1,2,3,4};
    // cout <<"Sixe inside main code : " << sizeof(arr) << endl;

    // cout << arr << endl;
    // cout << &arr << endl;

    // //printing array inside  main
    // for(int i=0;i<10;i++){
    //     cout << arr[i] << " " ;
    // }

    // cout << endl  << endl << " Now , calling solve function " <<endl;
    // solve(arr);

    // cout << endl << endl << "Wapis in main function " << endl;
    // for(int i=0;i<10;i++){
    //     cout << arr[i] << " ";
    // }


    int a=5;
    cout << "Address of a : " << &a << endl;
    int *ptr = &a;
    cout << "Address stored in ptr : " << ptr << endl;
    cout << "Address of ptr : " << &ptr << endl;
    update (ptr);
    cout << "Value of a : " << a <<endl;


    return 0;
}