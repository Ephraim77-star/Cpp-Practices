#include<iostream>
#include<map>
using namespace std;

//typedef string text;
//typedef int number;
//or

using text=string;
using number=int;

int main(){
  /*typedef= reserved keyword used to create an additional name(alias)
  for another data type.New identifier for an existing type, helps with 
  code readability and reduces typos 
   */

text name="Ephraim";
number score=100;

cout<<name<<endl;
cout<<score<<endl;

    return 0;
}