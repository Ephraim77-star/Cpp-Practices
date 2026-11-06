#include <iostream> 
using namespace std;

enum month{Jan, Feb, Mar, Apr, May, Jun, Jul};

int main(){

    month now = Jun;

    switch(now){
        case Jan : cout << "It is January" << endl;
        break;
        case Feb : cout << "It is February" << endl;
        break;
        case Mar : cout << "It is March" << endl;
        break;
        case Apr : cout << "It is April" << endl;
        break;
        case May : cout << "It is May" << endl;
        break;
        case Jun : cout << "It is June" << endl;
        break;
        case Jul : cout << "It is July" << endl;
        break;
    }
   

    return 0;
}