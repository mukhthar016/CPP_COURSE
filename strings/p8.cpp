#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool ispallindrome(string str){
    int start =0;
    int end = str.length()-1;
    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string str;
    cout<<"enter the string to be checked"<<endl;
    cin>>str;
    if(ispallindrome(str)){
        cout<<"the given string "<<str<<" is a pallindrome"<<endl;

    }
    else{
        cout<<"the given string "<<str<<" is not a pallindrome"<<endl;
    }
    return 0;
}