#include<iostream>
using namespace std;
int max_subarray(int arr[],int size){
    int max_sum = arr[0];
    int curr_sum = arr[0];
    for(int i=1;i<size;i++){
        curr_sum = max(arr[i],curr_sum + arr[i]);
        max_sum = max(max_sum,curr_sum);

    }
    return max_sum;
}
int main(){
    int arr[]={2,4,3,4,5,10};
    int size = sizeof(arr)/sizeof(int);
    cout<<max_subarray(arr,size);
}