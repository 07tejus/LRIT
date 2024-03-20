#include <iostream>
using namespace std;

class Mammal{
    public:
    Mammal(){
        cout<<"Mammal can give birth."<<endl;
    }
};

class WingedAnimal{
    public:
    WingedAnimal(){
        cout<<"Winged animal can fly."<<endl;
    }
};

class Bat : public Mammal, public WingedAnimal{};

int main(){
    Bat b1;

    return 0;
}