#include<iostream>
using namespace std;
void pascal(int rows){
    for(int i=0;i<rows;i++){
        for(int space=0;space<=rows-i-1;space++){
            cout<<" ";
        }
        int value=1;
        for(int k=0;k<=i;k++){
            cout<<value<<" ";
            value = value * (i - k) / (k + 1);
        }
        cout<<"\n";
    }
}
int main(){
    pascal(6);
}