#include<iostream>
using namespace std;
int main(){
    int bin;
    cout<<"enter the binary number to be converted"<<endl;
    cin>>bin;
    int ans =0;
    int pow=1;
    while(bin>0){
        int rem = bin%10;
        ans += rem*pow;
        pow *= 2;
        bin = bin/10;
    }
    cout<<ans<<endl;
    return 0;
}
