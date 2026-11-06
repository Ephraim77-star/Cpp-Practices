#include<iostream>
#include <cmath>
using namespace std;  

int main(){

    int x=5;
    int y=7;
    int z;

    z=max(x,y);//find the greater number
    z=min(x,y);//finds the smaller number
    z=abs(-4);//finds the absolute value of the number
    z=round(3.9);//rounds the number up or down as the case maybe
    z=ceil(3.15);//rounds the number up no matter what
    z=floor(3.99);//rounds the number down no matter what


    cout<<z<<endl;

    return 0;
}