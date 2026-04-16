#include<stdio.h>

int maxi(int a , int b, int c){
    if(a>b && a>c){
          return a;
    }
    else if(b>a && b>c){
         return b;
    }
    else if(c>a && c>b){
         return c;
    }
    else{
         return a;
    }
}

int mini(int a , int b, int c){
    if(a<b && a<c){
          return a;
    }
    else if(b<a && b<c){
         return b;
    }
    else if(c<a && c<b){
         return c;
    }
    else{
         return a;
    }
}

int main(){
    // for(int i=1;i<6;i++){
    //     printf("%d ", i);
    // }
    // printf("\n");

    // for(int i=0;i<5;i++){
    //     printf("%d ", i);
    // }
    // printf("\n");

    // for(int i=1;i<10;i+=2){
    //     printf("%d ", i);
    // }
    // printf("\n");

    // for(int i=5;i<26;i=i+5){
    //     printf("%d ", i);
    // }
    // printf("\n");

    // for(int i=0;i<5;i++){
    //     printf("%d ", i);
    // }
    // printf("\n");

    // for(int i=25;i>0;i=i-5){
    //     printf("%d ", i);
    // }
    // printf("\n");

    // for(int i=5;i>-1;i--){
    //     printf("%d ", i);
    // }

    // int i=0;
    // while(i<5){
    //     printf("%d ", i);
    //     i++;
    // }
    // printf("\n");

    // i=1;
    // while(i<10){
    //     printf("%d ", i);
    //     i+=2;
    // }
    // printf("\n");

    // i=9;
    // while(i>0){
    //     printf("%d ", i);
    //     i-=2;
    // }
    // printf("\n");

    // i=5;
    // while(i>0){
    //     printf("%d ", i);
    //     i--;
    // }
    // printf("\n");

    // i=25;
    // while(i>0){
    //     printf("%d ", i);
    //     i = i-5;
    // }
    // printf("\n");
    
    // for(int i=0;i<10+1;i++){
    //     printf("%d*%d = %d\n", 10, i,i*10);
    // }


    //max of 2 nums
    // int a = 20;
    // int b = 20;
    // if(a == b) {
    //     printf("same");
    //     return 0;
    // }
    // if(a>b) printf("%d", b);
    // else    printf("%d", b);

    
    //maximum of 3
    // int a=10, b=10, c=10;

    // if(a>b && a>c){
    //       printf("a is greatest");
    // }
    // else if(b>a && b>c){
    //      printf("b is greatest");
    // }
    // else if(c>a && c>b){
    //      printf("c is greatest");
    // }
    // else{
    //      printf("equal");
    // }

    //minimum
    // int a=1, b=10, c=10;
    // if(a<b && a<c){
    //       printf("a is minimum");
    // }
    // else if(b<a && b<c){
    //      printf("b is minimum");
    // }
    // else if(c<a && c<b){
    //      printf("c is minimum");
    // }
    // else{
    //      printf("equal");
    // }

    int a=5;
    int b = 3;
    int c = 10;

    printf("%d", maxi(a,b,c) - mini(a,b,c));

    return 0;
}