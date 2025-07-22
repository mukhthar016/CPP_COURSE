#include<iostream>
#include<cstring>
using namespace std;
void reverse(char str[],int size){
    int start =0;
    int end = size-2;
    while(start<end){
        int temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }

}
int main(){
    char str[ ]="mango";
    char temp[100];
    strcpy(temp,str);
    int size = sizeof(str)/sizeof(char);
    reverse(str,size);
    cout<<str<<endl;
    int result =strcmp(str,temp);
    if(result==0){
        cout<<" the given string "<<str<<"  is a pallindrome"<<endl;
    }
    else{
        cout<<"the given string "<<temp<<" is not a pallindrome"<<endl;
    }
    
}