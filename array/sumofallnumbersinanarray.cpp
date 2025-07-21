#include<iostream>
using namespace std;
int sumofarray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];

    }
    return sum;
}
int productofarray(int arr[],int size){
    int prod=1;
    for(int i=0;i<size;i++){
        prod*=arr[i];
    }
    return prod;
}
int main(){
    int arr[4]={1,2,4,5};
    int size = sizeof(arr)/sizeof(int);
    cout<<sumofarray(arr,size)<<endl;
    cout<<productofarray(arr,size)<<endl;
    return 0;
}
