#include<iostream>

using namespace std;


//RUNTIME POLYMORPHISM
// class Animal{
//     public:
//     Animal(){
//         cout << "I am inside animal constructor" << endl;
//     }
//     //if we want to call the function from Object type class we have to use(VIRTUAL KEYWORD) in pointer type class
//     void speak(){
//         cout <<"Speaking" << endl;
//     }
// };

// class Dog :public Animal{
//     public:
//     Dog(){
//         cout << "I am inside dog constructor" << endl;
//     }
//     //override
//     void speak(){
//         cout << "Barking" << endl;
//     }
// };

// int main(){
    // Dog d1;
    // d1.speak();
    // Animal a;
    // a.speak();

    //UPCASTING --> (In upcasting the function inside the pointer type class is called whenever we write the function call) 
    //And if we want to call the function from object type class we have to use(VIRTUAL KEYWORD) in Pointer type class with fuction return_type 
    // Animal* a = new Dog();
    // a->speak();

    //Downcasting
    // Dog* d = (Dog*) new Animal();
    // d->speak();


    //checking constructors
    // Animal* a = new Animal();    //basic
    // Dog* d = new Dog();    //getting both constructor coz of inheritance
    // Dog* d = (Dog*)new Animal();    //depends on object here its Animal
    // Animal* a = new Dog();    //depends on object here its Dog,  so both cconstructors are called

// }





//2D ARRAY DYNAMICALLY
// int main(){
//     int row=5;
//     int col=3;

//     int ** arr = new int*[row];
//     for(int i=0;i<row;i++){
//         arr[i] = new int [col];
//     }

//     //initialize
//         for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             arr[i][j] = i * col + j;  // just some values
//         }
//     }

//     // //printing
//     // for(int i=0;i<row;i++){
//     //     for(int j=0;j<col;j++){
//     //         cout << arr[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     //DE-Allocate
//     for(int i=0;i<row;i++){
//         delete[] arr[i];
//     }
//     delete [] arr;
// }




//CONST keyword
int main(){
    const int x =5;     //x is constant 
    //const can be intialized but can't be reassigned (x=6(not possible))
    cout << x <<endl;
}