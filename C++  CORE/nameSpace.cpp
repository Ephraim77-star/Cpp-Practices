#include<iostream>

using namespace std;

namespace first{
    int x =1;
}
namespace second{
    int x =2;
}

int main(){

 /*Namespace : provides a solution for preventing 
 conflict in large projects. Each entity needs a unique name
 A namespace allows for identical named entity as 
 long as the namespaces are different
*/

int y=5;
cout<<first::x<<endl;
cout<<second::x<<endl;
    return 0;
}