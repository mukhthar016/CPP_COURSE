#include<iostream>
using namespace std;
int firstnnaturalnum(int n){
    if(n==0){return 0;}
    return n + firstnnaturalnum(n-1);
}
int main(){
    int n;
    cout<<"enter the number sum to be printed"<<endl;
    cin>>n;
    cout<<firstnnaturalnum(n);
}