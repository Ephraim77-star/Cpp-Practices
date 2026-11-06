#include <iostream> 
using namespace std;

int main(){


    string arr[]={"boy","girl","gentleMan","Lady"};


    for(int i=0;i<sizeof(arr)/sizeof(string);i++){

        cout<<arr[i]<<endl;
    }

    for(auto element : arr){

        cout<<element<<endl;
    }

    return 0;
}