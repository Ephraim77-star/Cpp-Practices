#include <iostream>
using namespace std;

int main(){

    int size;
    cout<< "Enter the size of the array : ";
    cin >> size;


    int *pNums = new int[size];

    for(int i = 0; i < size; i++){

        cout << "Ener numbers #"<< i + 1 <<": ";
        cin >> pNums[i];

    }
    
    for(int i = 0; i < size; i++){

        cout << pNums[i]<<" ";
       
        
    }

    return 0;
}