#include<iostream>
using namespace std;
int main(){
    string str="hello";
    int          size=str.length();
    cout<<size<<endl;
    for(int i=0;i<size;i++){
      cout<<str[i]<<endl;
    }
    int start=0;
    int end=size-1;
    while(start<end){
  int temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    cout<<str<<endl;
}
       