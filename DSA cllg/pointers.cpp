#include<iostream>
using namespace std;

int main(){
    // int a = 10;
    // printf("%d %p", a , &a);

    // int b = 220;
    // int *d = &b;
    // printf("%d %d %d %d", b, d, &b, &d);

    //type casting
    // int i = 257;
    // void *d = &i;
    // printf("%d %d", *(int *)d , i);

    // int a = 10;
    // int *p = &a;
    // int **q = &p;
    // int ***r = &q;
    // int ****s = &r;

    // printf("%d %d %d %d %d\n", a , *p ,**q, ***r, ****s);

    // ****s = 120;    //updates a ki value
    // printf("%d %d %d %d %d\n", a , *p ,**q, ***r, ****s);

    // ***s = 120;    //updates nothing coz we can't update address value//gets error
    // printf("%d %d %d %d %d", a , *p ,**q, ***r, ****s);


    //void using pointers
    char a = 10;
    //int *p = &a;    //wrong initializatin coz its char type
    void *p = &a;
    //p = *(int *) p; //error
    cout << *(int*)p;

    return 0;
}