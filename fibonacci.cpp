#include<iostream>
using namespace std;
int main
(){
    int n;
    int a=0,b=1;
     cout<<"enter the terms to be printed"<<endl;
     cin>>n;

    for(int i=0;i<n;i++){
        cout<<a;
         int next = a+b;
         a = b;
         b = next;
    }
    return 0;

}