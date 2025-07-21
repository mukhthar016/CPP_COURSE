#include<iostream>
using namespace std;
void reverseanarray(int arr[],int size){
    int start =0;
    int end   =size-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int arr[4]={0,1,2,3};
    int size=4;
    reverseanarray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;

    }
    return 0;
}
