#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    if(n>0&&(n&(n-1))==0){
        cout<<"it is power of 2"<<endl;

    }
    else{
        cout<<"it is not a power of 2"<<endl;
    }
    return 0;
}