#include<iostream>
using namespace std;
int main(){
    int inp [5]={};
    
    int num [ ]={10,20,30,40,50,60,70,80,90};
    int size = sizeof(num)/sizeof(int);
    cout<<"enter 5 digits"<<endl;
    for(int i=0;i<=5-1;i++){
        cin>>inp[i];
    }
    for(int i=0;i<=5-1;i++){
        cout<<inp[i]<<endl;
    }
    for (int i=0;i<=size-1;i++){
      cout<<num[i]<<endl;  
    }
    return 0;
}