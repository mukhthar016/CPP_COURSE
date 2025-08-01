#include<iostream>
#include<vector>
using namespace std;
class phones{
    public:
    string name;
    int price;
    int ram;
    int warranty;
    phones(string n,int p,int r,int w){
        name = n;
        price = p;
        ram =r;
        warranty =w;
    }
    void display(){
        cout<<name<<" has "<<ram<<" gb ram with "<<warranty<<" years warranty "<<" comes at a price of "<<price<<"\n";
    }
};
int main(){
    int n;
    cout<<"enter the number of phones :\n";
    cin>>n;
    vector<phones> phone;
    
    
    cin.ignore();
    for(int i=0;i<n;i++){
        string n;
        int p;
        int r;
        int w;
        cout<<"enter phone:\n";
        getline(cin,n);
        cout<<"enter price:\n";
        cin>>p;
        cout<<"enter ram:\n";
        cin>>r;
        cout<<"enter warranty:\n";
        cin>>w;
        cin.ignore();
        phone.push_back(phones(n,p,r,w));
    }
    for(phones p:phone){
        p.display();
    }
return 0;
}