#include <iostream>
using namespace std;

class Parent{
    public:
    void display(){
        cout<<"I am a Parent"<<endl;
    }
};

class Child : public Parent{
};

class Grandchild : public Child{
};

int main(){
    Grandchild gg;
    gg.display();
    
    return 0;
}