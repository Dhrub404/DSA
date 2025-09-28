#include<iostream>

using namespace std;

class animal{
    private:
    int weight;

    public:         //to make the complete class public

    //state or properties
    int age ;
    string name;

    //default Constructor
    animal(){
        //used to initalize
        this->weight=0;
        this->age=0;
        this->name="";
        cout << "Constructor called" << endl;
    }

    //Parameterised Constructor
    animal(int age){
        this->age=age;
        cout << "Parameterised Constructor" << endl;
        cout << this->age << endl;
    }
    animal(int age , int weight){
        this->age=age;
        this->weight = weight;
        cout << "Parameterised Constructor 2 " << endl;
        cout << this->age << endl;
        cout << this->weight << endl;
    }
        animal(int age , int weight , string name){
        this->age=age;
        this->weight = weight;
        this->name = name;
        cout << "Parameterised Constructor 3 " << endl;
        cout << this->age << endl;
        cout << this->weight << endl;
        cout << this->name << endl;
    }

    //COPY Constructor
    animal(animal& obj){
        this->age= obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout << "I am inside copy constructor" <<endl;
    }
    

    //behavior
    void eat(){
        cout << "Eating" <<endl;
    }

    void sleep(){
        cout << "Sleeping" <<endl;
    }

    //Set Weight
    int getWeight(){
        return weight;
    }

    //Get Weight
    void setWeight(int weight){
        this->weight = weight;       //THIS is a pointer to current object
    }

    //checking copy constructor
    void print(){
        cout << this->age << " " << this->weight << " " << this->name << endl;
    }

    ~animal(){
        cout << "I am inside destructor" << endl;
    }

    //checking size
    // int hi;
    // int dh;
    // char ch;
};

int main(){
    
    //checking size
    // cout << "Size of a Empty Class" << " " << sizeof(animal);

    //object creation (2 Types)

    //STATIC MEMORY ALLOCATION
    // animal raja;

    // //input using object
    // raja.age=10;
    // raja.name="Sher";

    // cout << "Age: " << raja.age << endl;
    // cout << "Name: "<< raja.name << endl;
    // raja.eat();
    // raja.sleep();

    // //  to access private members we use get and set
    // raja.setWeight(101);
    // cout << "Weight: " << raja.getWeight() << endl;



    //DYNAMIC MEMORY ALLOCATION
    // animal* cat = new animal(100);
    
    //Input 
    // (*cat).age=11;
    // (*cat).name="Billi";

    //Alternate for input
    // cat->age=17;
    // cat->name= "billa";

    // cout << "Age: " <<  cat->age << endl; 
    // cout << "Name: "<< (*cat).name << endl;
    // cat->eat();
    // cat->sleep();


    //checking Constructor types(Default & Parameterised)
    // animal a(10);
    // animal* b = new animal(100,10,"Billi");

    // //object copy : 2 ways
    // animal c = a;   //1st way
    // animal animal1(c);    //2nd way


    //using copy constructor : (to unuderstand Deep and Shallow copy)
    // animal a;
    // a.age=17;
    // a.setWeight(50);
    // a.name="Bro";

    // animal b=a;

    // a.print();
    // b.print();

    // a.name[0]='c';
    // a.print();
    // b.print();


    //checking destructor
    animal a;
    a.age=5;

    animal* b = new animal();
    b->age=17;
    //manually calling destructor in dynamic allocation case
    delete b;


}