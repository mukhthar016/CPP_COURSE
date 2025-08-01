#include<iostream>
using namespace std;
bool odd(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    if(odd(arr,size)){
        cout<<"array has odd"<<endl;
    }
    else{
        cout<<"array doesnt have odd"<<endl;
    }
}