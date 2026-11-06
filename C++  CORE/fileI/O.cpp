#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

 fstream myfile;

 myfile.open("Me.txt",ios::in);//use in for read,use out to overwrite all
//use app to add text     
 if(myfile.is_open()){

    string line;
    
    while(getline(myfile,line)){

        cout << line << endl;

    }
   

    myfile.close();
    
 }

 /*if(myfile.is_open()){

    myfile<<"This is my first file"<< endl;
    myfile<<"My file is very sharp"<< endl;

    myfile.close();
    
 }*/
 /*myfile.open("Me.txt",ios::app);
 if(myfile.is_open()){

    myfile<<"i appended something"<< endl;
    
    myfile.close();
    
 }*/

    return 0;
}