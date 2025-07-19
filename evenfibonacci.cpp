#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the terms of fibonacci to be printed"<<endl;
    cin>>n;
    int a = 0, b=1;
    for(int i=0;i<n;i++){
        if(a%2==0){
            cout<<a<<" ";
        }
        int next = a+b;
        a=b;
        b=next;
    }
    return 0;
}