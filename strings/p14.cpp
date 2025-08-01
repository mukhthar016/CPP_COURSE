#include<iostream>
using namespace std;
int main(){
    string str = "mukthar";
    if(str.find("th")!=string::npos){
        cout<<"k is present"<<"\n";

    }
    else{
        cout<<"k is not present"<<endl;
    }
    return 0;
}