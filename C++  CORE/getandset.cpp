#include <iostream>
using namespace std;

class Person{

    private:
    string name = "Ephraim";

    public:

   string getname(){
    return name;
   } 

   void setname(string n){
       name = n;
   }

};

int main(){


    
    Person person1;
    person1.setname("Attah Ephraim U");

    cout << person1.getname() << endl;

    return 0;
}