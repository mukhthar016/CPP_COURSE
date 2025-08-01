#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    cout<<v[0]<<"\n";
    cout<<v[1]<<"\n";
    //method 2 
    cout<<v.at(0)<<"\n";
    cout<<v.at(1)<<"\n";
}