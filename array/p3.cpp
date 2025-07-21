#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num[5]={5,6,-7,4,8};
    int size = 5;
    int min = INT_MAX ;
    for(int i=0;i<size;i++){
        if(num[i]<min){
            min = num[i];

        }
        
    }
    cout<<min<<"is the smallest in an array "<<endl;
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;



    return 0;
}