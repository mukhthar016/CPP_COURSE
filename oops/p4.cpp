#include<iostream>
#include<vector>
using namespace std;
class bank{
    public:
    string name;
    string nominee;
    bank(string nm,string nmne){
        name=nm;
        nominee=nmne;
    }
    void display()const{
        cout<<name<<" has "<<nominee<<" as a nominee"<<endl;
    }
};
int main(){
    vector<bank> bankstat;
    int n;
    cout<<"enter the number of accounts:\n";
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string name;
        string nominee;
        cout<<"enter the account name:\n";
        getline(cin,name);
        cout<<"enter nominee name\n";
        getline(cin,nominee);
        bankstat.push_back(bank(name,nominee));

    }
    cout<<bankstat.size()<<endl;
    for(const auto&a:bankstat){
        a.display();
    }
}