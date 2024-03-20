#include <iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"I can eat.."<< endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"Woof..."<<endl;
    }
};

int main(){
    Dog mydog;
    mydog.eat();
    mydog.bark();
    
    return 0;
}