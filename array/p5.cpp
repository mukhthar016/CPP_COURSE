#include<iostream>
#include<climits>

using namespace std;
int main(){
    int num[10]={10,9,88,77,66,55,44,33,222,1};
    int size=10;
    int max=INT_MIN;
    int index = 0;
    for(int i=1;i<size;i++){
        if(num[i]>max){
        max = num[i];
     index=i;}

    }
    cout<<max<<"is the largest number "<<endl;
    cout<<index<<endl;

return 0; 
}