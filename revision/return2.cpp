#include<iostream>
using namespace std;

bool isprime(int num){
    if(num==1){return false;}
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }

    }
    return true;

}
bool allprime(int arr[],int size){
    for(int i=0;i<size;i++){
        if(!isprime(arr[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]={2,3,4,7,11};
    int size = sizeof(arr)/sizeof(int);
    if(allprime(arr,size)){
        cout<<"all elements are prime:\n";
    }
    else{
        cout<<"not all elements are prime:\n";
    }
}