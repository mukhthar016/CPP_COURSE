#include<iostream>
using namespace std;
int main(){
    int n;
    int fact =1;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=n;i>0;i--){
        fact *= i;
    }
    cout<<fact<<endl;
    return 0;
}