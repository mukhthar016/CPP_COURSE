#include<iostream>
using namespace std;
void countvowels(string str){
    int count =0;
    int end = str.length()-1;
    for(int i=0;i<=end;i++){
        switch(str[i]){
            case 'a':
            count +=1;
            break;
             case 'e':
            count +=1;
            break;
             case 'i':
            count +=1;
            break;
             case 'o':
            count +=1;
            break;
             case 'u':
            count +=1;
            break;
            
        }
    }
    cout<<count;
}
int main(){
    string str="aeiou";
    countvowels(str);
}