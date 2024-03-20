#include <iostream>
using namespace std;

class Vehicle{
    public:
    Vehicle(){
        cout<<"This is a Vehicle"<<endl;
    }
};

class Bike : public Vehicle{
    public:
    Bike(){
        cout<<"This is a Bike"<<endl;
    }
};

class Racing{
    public:
    Racing(){
        cout<<"This is For Racing"<<endl;
    }
};

class Kawasaki : public Bike, public Racing{
    public:
    Kawasaki(){
        cout<<"Kawasaki is Racing Bike"<<endl;
    }
};

int main(){
    Kawasaki ninja;

    return 0;
}