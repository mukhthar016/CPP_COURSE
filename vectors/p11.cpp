#include<iostream>
#include<vector>

using namespace std;
class name{
    public:
    string nam;
    name(string n){
    nam = n;
    }
    void display(){
        cout<<nam<<"\n";

    }
};
int main(){
    vector<name> n;
     
       
    while(true){
       cin.ignore();
        string nam;
        cout<<"enter name:\n";
        getline(cin,nam);
        
        if(nam=="stop"){
            break;
        }
        n.push_back(name(nam));

    }
    for(name nm:n){
        nm.display();
    }
    return 0;
}