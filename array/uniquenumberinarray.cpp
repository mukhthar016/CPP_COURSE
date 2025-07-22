#include<iostream>
using namespace std;
int uniquenum(int arr[],int size){
    int count =0;
    
    for (int i=0;i<size;i++){
        bool isunique = true;
        for(int j=0;j<size;j++){
             if(i!=j&&arr[i]==arr[j]){
                  isunique=false;
                  break;
             }
        }
         
    if(isunique){
        cout<<arr[i]<<" ";
        
        count++;
    }
       
   
   }
   if(count==0){
    cout<<"there are no unique numbers in this array"<<endl;
    return -1;
   }
return count;
}
int main(){
    int arr[5]={2,5,3,4,2};
    int size = sizeof(arr)/sizeof(int);
   int res= uniquenum(arr,size);
   cout<<"there are "<<res<<" unique numbers"<<endl;
}