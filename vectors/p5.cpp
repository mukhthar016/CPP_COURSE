#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int carsize;
    cout<<"enter the number of the cars :\n";
    
    cin>>carsize;

vector<string> cars(carsize);
string input;
cin.ignore();

for(int i=0;i<carsize;i++){
    cout<<"enter the "<<i+1<<" th car :\n";
    getline(cin,input);
    cars.push_back(input);

}
 for(string x:cars){
    cout<<x<<"\n";
 }
}