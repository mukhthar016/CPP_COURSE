#include<iostream>
using namespace std;
bool pallindrome(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        if(arr[start]!=arr[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    int arr[]={1,2,3,1};
    int size = sizeof(arr)/sizeof(int);
    if(!pallindrome(arr,size)){
        cout<<"array is not a pallindrome"<<endl;
    }
    else{
        cout<<"array is a pallindrome"<<endl;
    }
}