#include<iostream>
using namespace std;
int main(){
    int a=2,b=3;
    int temp =a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
    return 0;
}