#include<iostream>

using namespace std;

//ENCAPSULATION class
// class Animal{
//     private:
//         int age;
//         int weight;

//     public:
//         void eat(){
//             cout << "Eating " << endl;
//         }
//         int getAge(){
//             return this->age;
//         }
//         void setAge(int age){
//             this->age=age;
//         }
// };

//INHERITANCE
//PARENT CLASS
// class Animal{
//     public:
//         int age;
//         int weight;

//         void eat(){
//             cout << "Eating " << endl;
//         }
// };
// //child class;
// class Dog:public Animal{
// };


//SINGLE LEVEL INHERITANCE 
// class car{
//     public:
//         int age;
//         int weight;
//         string name;

//         void speed(){
//             cout << "Speed up" << endl;
//         }
//         void breaks(){
//             cout << "Apply breaks" << endl;
//         }
// };
// class scorpio:public car{
// };


//MULTILEVEL INHERITANCE 
// class Fruit{
//     public:
//         string name;
// };
// class Mango:public Fruit{
//     public:
//         int weight;
// };
// class alphanzo:public Mango{
//     public:
//         int sugarLevel;
// };


//MULTIPLE INHERITANCE
// class A{
//     public:
//     int physics;
//     int chemistry;

//     A(){
//         chemistry=100;
//     }
// };
// class B{
//     public:
//     int chemistry;

//     B(){
//         chemistry=400;
//     }
// };
// class C:public A,public B{
//     public:
//     int bio;
// };


//HIERARCHICAL INHERITANCE
// class car{
//     public:
//     int age;
//     int weight;
//     string name;

//     void speed(){
//         cout <<"Speed up" << endl;
//     }
// };
// class scorpio:public car{

// };
// class fortuner:public car{
    
// };

// int main(){

    // inheritance example
    // Dog d1;
    // d1.eat();


    //SINGLE LEVEL INHERITANCE
    // scorpio s1;
    // s1.speed();
    // s1.breaks();


    //MULTILEVEL INHERITANCE
    // alphanzo a;
    // cout << a.name << " " <<  a.sugarLevel << " " << a.weight << endl;


    //MULTIPLE INHERITANCE
    // C objC;
    // //As we get chemistry in both the class so, to solve this we have to use SCOPE RESOLUTION OPERATOR i.e. (A::)
    // cout << objC.physics << " " <<  objC.bio << " " << objC.A::chemistry ;


    //HIERARCHICAL INHERITANCE
    // scorpio s1;
    // s1.speed();

    // fortuner f1;
    // f1.speed();

//     return 0;
// }





//POLYMORPHISM

//Compile time polymorphism
// class Maths{
//     public:
//     //function overloading
//     int sum(int a , int b){
//         cout << "I am in first signature" << endl ;
//         return a+b;
//     }
//     int sum(int a , int b ,int c){
//         cout << "I am in second signature" << endl ;
//         return a+b+c;
//     }
//     int sum(int a, float b){
//         cout << "I am in third signature" << endl ;
//         return a+b+10;
//     }
// };


//Operator Overloading
class param{
    public:
    int val;

    void operator+(param& obj2){
        int value1=this->val;
        int value2=obj2.val;
        cout << (value2-value1) << endl;
    }
};



int main(){

    //Function Overloading
    // Maths obj;
    // cout << obj.sum(2,3.0f) << endl;

    //Operator Overloading
    param obj1,obj2;
    obj1.val=7;
    obj2.val=2;

    //this should print the DIFFERENCE between them
    obj1+obj2;

}