#include<iostream>
using namespace std;
int factorial(long long int n){
 if(n==0||n==1){
    return 1;
 }
 return n*factorial(n-1);
}
int main(){
    long long int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"the factorial of "<<n<<" is "<<factorial(n)<<endl;
    return 0;
}