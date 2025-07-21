#include<iostream>
using namespace std;
int main(){
    int array[8]={2,3,4,5,6,7,8,9};
    int num = 6;
    int size = sizeof(array)/sizeof(int);
    bool found = false;
    int index = 0;
    for(int i=0;i<size;i++){
        if(array[i]==num){
            found = true;
            index=i;
            cout<<"your number found at "<<index<<"th position"<<endl;
            break;

        }

    }
    if(!found){
        cout<<"your number does not exist in the array"<<endl;
    }
}