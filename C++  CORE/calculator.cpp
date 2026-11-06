#include<iostream>
#include<cmath>
using namespace std;  

void Do(char op,double a,double b){

    cout<<"Enter + for addition"<<endl;
    cout<<"Enter - for subtraction"<<endl;
    cout<<"Enter x for addition"<<endl;
    cout<<"Enter / for division"<<endl;
    cout<<"Enter ^ for square"<<endl;
    cout<<endl;
       cout<<"Enter operator: ";
       cin>>op;
   
       switch(op){

        case '+':cout<<"Sum is: "<<a+b<<endl;
        break;
        case '-':cout<<"Difference is: "<<a-b<<endl;
        break;
        case 'x':cout<<"Product is: "<<a*b<<endl;
        break;
        case '/':cout<<"Quocient is: "<<a/b<<endl;
        break;
        case '^':cout<<"Square is: "<<pow(a,b)<<endl;
        break;

        default:cout<<"Enter a valid operator from the list above";
        cout<<endl;
        Do(op,a,b);
       }

}
int main(){

    int a,b;
    char op;
    cout<<endl;
    cout<<"------------Simple Calculator----------"<<endl;
    cout<<endl;
    cout<<"Enter num1: ";
    cin>>a;
    cout<<"Enter num2: ";
    cin>>b;

    Do(op,a,b);

    
    return 0;
}