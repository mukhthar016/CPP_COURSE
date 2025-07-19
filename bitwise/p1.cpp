#include<iostream>
using namespace std;
int main(){
    int a=8,b=2;
    //xor operator
    cout<<(a^b)<<endl;
    //or operator
    cout<<(a|b)<<endl;
    //and operator
    cout<<(a&b)<<endl;
    //left shift
    //left shift is basically ans=a*2^b
    //shift two bits to the left fill the remaining space on the right with zeros
    cout<<(a<<b)<<endl;
    //right shift
    //right shift is basically ans =a/2^b
    //shift two bits to right if there are no spaces remove the extra bits from the right 
    cout<<(a>>b)<<endl; 
    
return 0;
}