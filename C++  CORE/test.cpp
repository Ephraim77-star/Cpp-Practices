#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){


    string name;
    cout << "Enter your name: ";
    cin >> name;
    string fname = name.append(".txt");



    fstream myfile;
    myfile.open(fname,ios::in);

    if(myfile.is_open()){
       string line;
       while(getline(myfile,line)){

        cout << line <<endl; 
       }
        myfile.close();

    }

    
    return 0;
}