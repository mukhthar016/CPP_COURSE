#include<iostream>
using namespace std;
int no_of_subarrays(int size){
 return size*(size+1)/2;
}
int main(){
    int arr[]={2,3,4,5,6,6};
    int size=sizeof(arr)/sizeof(int);
    cout<<no_of_subarrays(size);
}