#include <iostream>
using namespace std;

int main(){

string str1 = "telephone";
string str2[] = {"telne","phone","ztele","ne"};
int i = 0, j = 0;
int count1=0,count2=0;

for (int k=0; k<4; k++){
    count1=0;
    count2=0;
    for (i = 0; i < str2[k].length(); i++) {
        for(j=0; j<str1.length(); j++){
    
            if(str2[k][i] == str1[j]){
    
                count1++;
                break;
            }
            
        }
        
    }
    
    if(count1 == str2[k].length()){
       cout<<str2[k]<<" is a subset of "<<str1<<endl;     
    }else{
        cout<<str2[k]<<" is not a subset of "<<str1<<endl;     
    }
}

// cout<<str2[0]<<" is a subset of "<<str1<<endl;
// cout<<str2[1]<<" is a subset of "<<str1<<endl;
    
    return 0;
}