#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[]={'a','b','c','\0'};
    char str1[]="hi";
    str1[1]='w';
    string s = "hello";
    cout<<str1[1]<<endl;
    cout<<s.length()<<endl;
    
    cout<<str1<<endl;
    cout<<strlen(str1)<<endl;

    cout<<str;

}