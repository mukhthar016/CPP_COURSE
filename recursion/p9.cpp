#include<iostream>
using namespace std;
bool isprime(int n,int i){
    
    if(n<=1){return false;}
    if(i*i>n){return true;}
    if(n%i==0){return false;}
     
    return isprime(n,i+1);
}
int main(){
    int n =7;
    int i=2;
    if(isprime(n,i)){
        cout<<"prime";
    }
    else{
        cout<<"not a prime";
    }
}