#include <iostream>
#include <string>
using namespace std;

bool isRotarion(const string& str1,const string& str2){

    if(str1.length() != str2.length()){
        return false;

    }

    string temp = str1 + str1;

    if(temp.find(str2) != string::npos){
        return true;
}
    return false;
}


int main(){

    string str1 = "telephone";
    string str2 = "nelephote";

    if(isRotarion(str1,str2)){
        cout<<str2<<" is a rotation of "<<str1<<endl;
    }else{
        cout<<str2<<" is not a rotation of "<<str1<<endl;
    }
   string str3 = "nelephote";
    string str4 = "nelephote";

    if(isRotarion(str3,str4)){
        cout<<str4<<" is a rotation of "<<str3<<endl;
    }else{
        cout<<str4<<" is not a rotation of "<<str3<<endl;
    }
return 0;
}