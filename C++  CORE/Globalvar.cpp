#include<iostream>
using namespace std;  

int mynum=5;

void print(){
    cout<<mynum<<endl;
}

int main(){
// The global variable is not affected by the local variable
    // The local variable is not affected by the global variable
    int mynum=3;
    cout<<mynum<<endl; // prints 3
    print(); // prints 5

    
    return 0;
}