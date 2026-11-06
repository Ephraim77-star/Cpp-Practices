#include<iostream>
using namespace std;

void add(){
    cout<<"Just adding a pizza!!!"<<endl;
}

void add(string topping1){
    cout<<"Adding a " <<topping1<<" topping to it!!!"<<endl;
}

void add(string topping1,string topping2){
    cout<<"Adding " <<topping1<<" and "<<topping2<<" to it!!!"<<endl;
}
int main(){

    string topping1="tomato spice",topping2="irish meat";

    add();
    add(topping1);
    add(topping1,topping2);

    return 0;
}