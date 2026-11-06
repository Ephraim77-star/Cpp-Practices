#include<iostream>
#include <cmath>
using namespace std;  //std means standard

int main(){

   cout<<endl;
   cout<<"-----------------Calculate Hypotenus-------------------"<<endl;
   cout<<endl;

   int a,b,c;
   cout<<"Enter the value of a: ";
   cin>>a;
   cout<<"Enter the value of b: ";
   cin>>b;

   c=sqrt((a*a)+(b*b));

   cout<<"THe hypotenus of the triangle is: "<<c<<endl;
    return 0;
}