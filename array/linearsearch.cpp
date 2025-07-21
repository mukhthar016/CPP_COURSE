#include<iostream>
using namespace std;
int linearSearch(int arr[ ],int size){
    int num;
    int index = -1;
    bool found = false;
    cout<<"enter the number to be searched"<<endl;
    cin>>num;
    for(int i=0;i<size;i++){
        if(arr[i]==num){
         index=i;
          found = true;
         cout<<"number found at "<<index<<" index and "<<index+1<<" position"<<endl;
         return index;
         break;
        }
    }
    if(!found){
        cout<<"-1(number not found)"<<endl;
    }
    return -1;
}
int main(){
    int arr[5]={2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    linearSearch(arr,size);
    return 0;
}