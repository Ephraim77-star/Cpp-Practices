#include <iostream>
using namespace std;

int main(){

string str1 = "telephone";
string str2 = "telne";
int i = 0, j = 0;
int count=0;

for (i = 0; i < str2.length(); i++) {
    for(j=0; j<str1.length(); j++){

        if(str2[i] == str1[j]){

            count++;
            break;
        }
        
    }
    
}

if(count == str2.length()){
   cout<<str2<<" is a subset of "<<str1<<endl;     
}else{
    cout<<str2<<" is not a subset of "<<str1<<endl;     
}
    
    return 0;
}