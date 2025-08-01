#include<iostream>
using namespace std;
int duplicate(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={2,4,5,2,6};
    int size = sizeof(arr)/sizeof(int);
    cout<<duplicate(arr,size)<<endl;
}