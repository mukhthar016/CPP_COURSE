#include<iostream>
using namespace std;
void swapmaxandmin(int arr[],int size){
    int temp;
    int max = arr[0];
    int min =arr[0];
    int maxind = 0;
    int minind =0;
    
    

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            maxind=i;
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
            minind = i;
        }
    }
    temp=arr[maxind];
    arr[maxind]=arr[minind];
    arr[minind]=temp;
}
int main(){
    int arr[5]={2,4,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    swapmaxandmin(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}