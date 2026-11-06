#include<iostream>
#include<windows.h>
using namespace std; 

int main(){

    //cin (extration)
    //cout (insertion)

    string name;
    int age;

    cout<<"Whats your age: ";
    cin>>age;
    cin.ignore();

    cout<<"Whats your name: ";
    getline(cin,name);

    cout<<"Hello "+name<<endl;
    cout<<"You are "<<age<<" Years old"<<endl;
    
    Sleep(10000);
    
    return 0;
}