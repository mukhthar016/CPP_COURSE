#include<iostream>
#include<vector>
using namespace std;
class phone{
    public:
    string name;
    string display_quality;
    string display_type;
    phone(string n,string dt,string dq){
        name=n;
        display_type=dt;
        display_quality=dq;
    }
    void display(){
        cout<<name<<"has"<<display_type<<" and "<<display_quality<<"\n";
      }
};
int main(){
    vector<phone> p;
    int n;
    cout<<"enter the number of phones:\n";
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string name;
        string displayq;
        string displayt;
        cout<<"enter the name of the phone:\n";
        getline(cin,name);
        cout<<"enter the display type:\n";
        getline(cin,displayt);
        cout<<"enter the display quality:\n";
        getline(cin,displayq);
        p.push_back(phone(name,displayt,displayq));
        
    }
    cout<<"before modifying vector"<<endl;
    for(phone ph:p){
        ph.display();
    }
    
    for(phone &ph:p){
        if(ph.display_type=="oled"){
            ph.display_quality="good";
        }
        else{
            ph.display_quality="bad";
        }
    }
    cout<<p.size()<<endl;
    cout<<"after modification"<<"\n";
    for(phone ph:p){
        ph.display();
    }

}