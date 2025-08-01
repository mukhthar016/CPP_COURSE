#include<iostream>
#include<vector>//header required for vector

using namespace std;
int main(){
    int n;

cout<<"enter the number elements to add in a vector : \n";
cin>>n;
vector<int> v(n);
cout<<"enter the "<<n<<" elements of vector :\n";
for(int i=0;i<n;i++){
    cin>>v[i];
}
for(int x:v){
    cout<<x;
}
}