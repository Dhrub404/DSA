#include <stdio.h>


void spec(void *a, void *b , void *d, void* arr, int n){
    printf("%d %c %lf \n",*(int*)a, *(char*)b , *(double*)d);
    
    for(int i=0;i<n;i++){
        printf("%d",*((int*)(arr)+i));
    }
}

int main(){
    int a = 10;
    char b = 'a';
    double d = 32.88;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    spec(&a,&b,&d,arr,n);

    return 0;
}