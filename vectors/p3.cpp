#include<iostream>
#include<vector>//header required for vector

using namespace std;
int main(){
 vector<int> v;//declares an empty vectors of integers
 v.push_back(1);
 v.push_back(2);
 v.push_back(3);
 v.push_back(4);
 int size = v.size();
 //method 1 loop
 for(int i=0;i<size;i++){
    cout<<v[i]<<"\n";

 }
 for(int x : v){
    cout<<x<<"\n";
 }
 v.pop_back();//removes element from last index
 v.push_back(8);//adds an element 8 at the last index
 cout<<"after pop back and push back"<<"\n";
 for(int x:v){//new loop method consider x as i and it will travese all index in vector v 
 cout<<x<<"\n";
 }
}