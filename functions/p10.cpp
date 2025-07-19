#include<iostream>
using namespace std;


long long int fact(int n){
   long long int facto = 1;
    for(int i=n;i>0;i--){
        facto*=i;
        
    }
return facto;
}
   long long int ncr (int n,int r){
       long long  int num = fact(n);
        long long int den = fact(r)*fact(n-r);
         return num/den;

    }
    int main(){
        int n,r;
        cout<<"enter the value of n and r"<<endl;
        cin>>n>>r;
        if(r>n){
            cout<<"r can not be greater than n"<<endl;

        }
        else{
            cout<<"the ncr value is "<<ncr(n,r)<<endl;
        }
        return 0;
    }

