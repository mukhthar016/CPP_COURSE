#include<iostream>
using namespace std;
int countvowels(string str){
    int end = str.length()-1;
    int count = 0;
    for(int i=0;i<=end;i++){
    if(str.find(str[i])!=string::npos){
        count++;
    }
    }
    return count;
}
int main(){
    string str = "aeiou";
    int count = countvowels(str);
    if(count==0){
        cout<<"there are no vowels";
    }
    else{
        cout<<count;
    }
}