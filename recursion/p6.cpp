#include<iostream>
using namespace std;
void print(int n,int i){
    if(i>n){
        return ;
    }
    cout<<i<<endl;
    return print(n,i+1);
}
int main(){
    int n=5;
    int i=1;
    print(n,i);
}