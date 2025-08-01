#include<iostream>
using namespace std;
bool ascending(int arr[],int size){
     for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
     }
     return true;
}
int main(){
    int arr[]={2,4,6,8,10,7};
    int size = sizeof(arr)/sizeof(int);
    if(!ascending(arr,size)){
        cout<<"array is not sorted in ascending"<<endl;
    }
    else{
        cout<<"array is sorted in ascending"<<endl;
    }
}