#include<iostream>
using namespace std;
bool divideby7(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%7==0){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[]={2,5,1,3,4};
    int size = sizeof(arr)/sizeof(int);
    if(divideby7(arr,size)){
        cout<<"an element in this array is divisible by 7"<<endl;

    }
    else{
        cout<<"no element in this array is divisible by 7"<<endl;
    }
}