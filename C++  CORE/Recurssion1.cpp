#include <iostream>
using namespace std;

void eating(int num){

    if(num > 0){
        cout<< "Eating!!!"<<endl;
        eating(num - 1);
    }

}

int main(){


    eating(100);

    return 0;
}