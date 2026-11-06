#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string str1, string str2){

    if (str1.length() != str2.length()){
        return false;
    }
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    if(str1 == str2){
        return true;
    }else{
        return false;
    }

}

int main(){

    string str1="triangle",str2="integral";
    string str3="apple",str4="pale";

    if(isAnagram(str1,str2)){
        cout<<str2<<" is an anagram of "<<str1<<endl;
    }else{
        cout<<str2<<" is not an anagram of "<<str1<<endl;
    }
}