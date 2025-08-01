#include<iostream>
using namespace std;
int eventriplets(int arr[],int size){
  int count =0;
  for(int i=0;i<size-2;i++){
    if(arr[i]%2==0&&arr[i+1]%2==0&&arr[i+2]%2==0){
        count++;
    }

  }
  return count;
    }
int main(){
    int arr[]={2,4,6,6,8,10};
    int size = sizeof(arr)/sizeof(int);
    cout<<eventriplets(arr,size);
}
