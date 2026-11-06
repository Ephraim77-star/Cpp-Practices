#include <iostream>
using namespace std;

class Animal{

    public:

    bool alive = true;

    void eat(){

        cout << "The animal is eating" <<endl;
    }

};

class Goat : public Animal{

    public:
void bleat(){

    cout << "The goat is bleating" << endl;
}

};

class Rabbit : public Animal{

    public:
    void twit(){
    
        cout << "The Rabbit is twiting" << endl;
    }
    
    };

int main(){

    Goat goat;
    Rabbit rabbit;

    goat.bleat();
    rabbit.twit() ;
    goat.eat() ;
    rabbit.eat() ;


    return 0;
}