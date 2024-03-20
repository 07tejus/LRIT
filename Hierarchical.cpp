#include <iostream>
using namespace std;

class Animal{
    public:
    void info(){
        cout<<"Animal.."<<endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"I am a dog, woof woof.."<<endl;
    }
};

class Cat : public Animal{
    public:
    void meow(){
        cout<<"I am a cat, meow meow.."<<endl;
    }
};

int main(){
    Dog mydog;
    cout<<"Dog"<<endl;
    mydog.info();
    mydog.bark();

    Cat mycat;
    cout<<"Cat"<<endl;
    mycat.info();
    mycat.meow();
    
    return 0;
}