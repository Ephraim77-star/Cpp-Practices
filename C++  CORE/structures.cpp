#include <iostream>
using namespace std;

struct student{

    std::string name;
    int age;
    string course;

};

void PrintProfile(student &students){

    cout << students.name << endl;
    cout << students.age << " years" << endl;
    cout << students.course << " Department" << endl;
    cout << endl;
}

int main(){

  

   
   student student1;
   student student2;
   student student3;
   student student4;

   student1.name = "Ephraim";
   student1.age = 16;
   student1.course = "Software Engineering";

   student2.name = "Obinna";
   student2.age = 16;
   student2.course = "Computer Science";

   student3.name = "Fortune";
   student3.age = 16;
   student3.course = "Mechatronics";

   student4.name = "Festus";
   student4.age = 14;
   student4.course = "Mechatronics";
    
   PrintProfile(student1);
   PrintProfile(student2);
   PrintProfile(student3);
   PrintProfile(student4);

   
    return 0;
}
