#include<iostream>
#include<cstring>
using namespace std;
int main(){
char str[]="hello";
int size = sizeof(str)/sizeof(char);
int start =0;
int end = size - 2;
while(start<end){
    char temp = str[start];
    str[start]=str[end];
    str[end]=temp;
    start++;
    end--;
}
cout<<str;
}
