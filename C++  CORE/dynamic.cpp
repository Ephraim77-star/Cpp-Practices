#include <iostream>
using namespace std;

int main(){


    int *pNum = new int;
    *pNum = 21;

    cout << pNum << '\n' << *pNum << endl;

    delete pNum;

    return 0;
}