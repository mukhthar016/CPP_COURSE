#include<iostream>
using namespace std;
void substring(int arr[],int size){
    for(int start=0;start<size;start++){
        for(int end=start;end<size;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<endl;
        }
    }
}
int main(){
    int arr[]={2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    substring(arr,size);
}