#include<iostream>
using namespace std;
bool divideby3(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%3!=0){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]={1,2,4,5,7,7};
    int size = sizeof(arr)/sizeof(int);
    if(!divideby3(arr,size)){
        cout<<"an element in this array is not divisible by 3"<<endl;

    }
    else{
        cout<<"all the elements are divided by 3"<<endl;
    }
}