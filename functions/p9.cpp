#include<iostream>
using namespace std;
float pi(){
    return 3.14;
}
int add(int a,int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
void greetings(){
    cout<<"hello mukthar, welcome back"<<endl;
}
int main(){
    greetings();

    cout<<"the value of pi is"<<pi()<<endl;
    cout<<"the sum of 4+5 is"<<add(4,5)<<endl;
    int subt = sub(4,5);
    cout<<subt<<endl;
}
