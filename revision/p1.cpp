#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* p=new int(5);
    int* A=&a;
    cout<<a<<"||"<<*p<<"||"<<A<<endl;
}