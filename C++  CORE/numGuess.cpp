#include<iostream>
#include <ctime>
#include<windows.h>
using namespace std;  

int main(){

    int num,guess,tries,guesses=0;

    srand(time(0));
    num=rand() % 100 + 1; 

    cout<<endl;

    cout<<"-----------Number Guessing Game----------"<<endl;
    cout<<endl;
        cout<<"Enter number (1-100)"<<endl;
        cout<<endl;

    do{

        
   
        cout << "Enter your guess: ";
        cin >> guess;

        if(guess > num){
            cout << "greater!" << endl;
        }else if( guess < num ){
            cout << "smaller!" << endl;
        }
        guesses++;

    }while(guess!=num);
   
    cout<<"CORRECT!!!"<<endl;
    cout<<"you guessed "<<guesses<<" times"<<endl;
    
    cout<<endl;
    cout<<"--------------------------------"<<endl;

    Sleep(10000);
    return 0;
}