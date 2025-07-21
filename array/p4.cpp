#include<iostream>
using namespace std;
int main(){
    int num[6]={0,34,55,5,657,4};
    int size = 6;

    int max = num[0];
    for(int i=1;i<size;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    cout<<max<<"is the largest number"<<endl;
    return 0;
}