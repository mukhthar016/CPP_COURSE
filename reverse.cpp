#include<iostream>
using namespace std;
int main(){
    int num;
    int rev = 0; 
    
    cout<<"enter the number"<<endl;
    cin>>num;
    int og = num;
    while(num>0){
     rev = (rev*10)+num%10;
     num=num/10;
    }
    cout<<"the reverse of "<<og<<"is"<<rev<<endl;
    if(og==rev){
        cout<<"given number"<<og<<"is a pallindrome"<<endl;

    }
    else{
        cout<<"given number"<<og<<"is not a pallindrome"<<endl;
    }
    
    return 0;
}