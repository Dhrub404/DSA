#include<iostream>
using namespace std;

void spec(void *a, void *b ,void *d, void* arr, int n){
    cout << *(int*)a << " " << *(char*)b << " "  << *(double*)d << endl;

    for(int i=0;i<n;i++){
        cout << *((int*)(arr)+i) << " ";
    }
}

// int main(){
//     // int a = 10;
//     // char b = 'a';
//     // double d = 32.88;
//     // int arr[] = {1,2,3,4,5};
//     // int n = sizeof(arr)/sizeof(arr[0]);

//     // spec(&a,&b,&d,&arr,n);

//     //array
//     int arr[] = {10,20,30,40,50};

//     // printf("%d \n", arr);  //gives address
//     // printf("%p \n", arr);  //gives address using address format specifier
//     // printf("%d \n", *arr);  //gives value
//     // printf("%p \n", &arr[1]);  //gives next value ka address 
//     // printf("%d", arr+1);
//     cout << 3[arr] << endl;
//     cout << sizeof(arr) << " " << sizeof(*arr) << endl;


//     //index     address      value
//     int const n = 5;    //this will work
//     int a[n];
//     // *(a+0) = 10;
//     // *(a+1) = 20;
//     // a[2] = 30;
//     // a[3] = 40;

//     // printf("Enter size of array: ");     //Gives ERROR cos n size is not fixed here....it changed when we try to get scanf 
//     // scanf("%d\n",&n);

//     // for(int i=0;i<sizeof(a)/sizeof(*(a));i++){
//     //     printf("\nEnter value at index %d ",i);
//     //     scanf("%d", &a[i]);
//     // }

//     // printf("index \t address \tvalue\n");

//     // printf("****************************\n");
//     // for(int i=0;i<sizeof(a)/sizeof(*(a));i++){
//     //     printf("%d\t%p\t%d\n", i, a+i,*(a+i));
//     // }

//     return 0;
// }

int main(){
    int a[] = {1,2,3,4};

    cout << &a << endl;
    cout << a << endl;
    cout << (int)(&a+1) - (int)a << endl;   //gives 16  coz outer block ka next block address - inner block ka initial address 
    cout << (int)(a+1) - (int)a << endl;   //gives 4   coz inner bloack ka next block address - inner block ka initial address


    return 0;
}