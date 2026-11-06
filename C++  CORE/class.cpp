#include <iostream>
using namespace std;

class Person{

    public:

    string name;
    int age;
    bool student;

    Person( string x, int y, bool z){

       name = x;
       age = y;
       student = z;


    }

    void eat(){

        cout << "The person is eating" << endl;

    }

    void sleep(){

        cout << "The person is sleeping" << endl;
    }

};

void print(Person &person){

    cout << person.name << endl;
    cout << person.age << endl;

    if(person.student){

        cout << "The person is a student" << endl;

    }else{

        cout << "The person is not a student" << endl;
    }
    

}
int main(){

    Person person1("Ephraim", 16, true);
    Person person2("Obinna", 16, true);
    
    print(person1);

    person1.eat();
    person1.sleep();

    print(person2);
   
    person2.eat();
    person2.sleep();

    
    return 0;
}