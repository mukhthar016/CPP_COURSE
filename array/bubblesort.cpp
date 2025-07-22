#include<iostream>
using namespace std;
void bubblesort(int arr[],int size){
    
    for(int i=0;i<size-1;i++){
        bool isswapped = false;
        for(int j=0;j<size-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            isswapped = true;
        }
    }
    if(!isswapped){
        break;
    }

    }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
} 
int main(){
    int arr[6]={2,3,1,4,5,2};
    int size=sizeof(arr)/sizeof(int);
    bubblesort(arr,size);
    print(arr,size);
}