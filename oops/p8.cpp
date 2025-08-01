#include<iostream>
#include<vector>
using namespace std;
class internet{
    public:
    string type;
    int speed;
    internet(){
        cout<<"enter the name of internet:\n";
        getline(cin,type);
        cout<<"enter the speed of the internet:\n";
        cin>>speed;
        cin.ignore();
    }
    void display()const{
        cout<<type<<" has a speed of "<<speed<<" ps\n";
    }
};
int main(){
    vector<internet> inter;
    int n;
    cout<<"enter the number of elements to be entered:\n";
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        internet g;
        inter.push_back(g);
    }
    for(const auto& a:inter){
        a.display();
    }
}