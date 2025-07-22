#include<iostream>
using namespace std;
void selectionsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minindex=i;
        for(int j=i+1;j<size;j++)
        {
          if(arr[j]<arr[minindex]){
            minindex=j;
          }
        }
        swap(arr[i],arr[minindex]);
    }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[]={5,3,6,4,7,4,7};
    int size = sizeof(arr)/sizeof(int);
    selectionsort(arr,size);
    print(arr,size);
    return 0;
}
