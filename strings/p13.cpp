#include<iostream>
using namespace std;
int main(){
    string str = "aeiou";
    if(str.find('i')!=string::npos){
        cout<<"i is present"<<"\n";
    }
    else{
        cout<<"i is not present"<<"\n";
    }
}