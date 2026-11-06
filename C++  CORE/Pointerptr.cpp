#include <iostream> 
using namespace std;

int main(){

    int age = 10;
    int *page = &age;

    cout << page << endl;
    cout << &age << endl;
    cout << *page <<endl;
    cout << age <<endl;

    return 0;
}