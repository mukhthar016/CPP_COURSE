#include<iostream>
using namespace std;
int main(){
    int ans = 0;
    int base =1;
    int dec;
    cout<<"enter the dec to be converted"<<endl;
    cin>>dec;
    while(dec>0){
       int rem = dec%2;
       dec = dec/2;
       ans += rem*base;
       base *= 10;
    }
    cout<<ans<<endl;
    return 0; 

}