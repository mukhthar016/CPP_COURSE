#include<iostream>
using namespace std;
int main(){
    string str = "mukthar";
    char t ='t';
    char i = 'i';
    char* add = &str[1];
    int posi = str.find(i);
    int pos = str.find(t);
    cout<<pos<<"\n ";
    cout<<posi<<"\n";
    cout<<t<<"\n";
    cout<<add<<"\n";
}