#include<iostream>
using namespace std;
class phone{
    public:
    string name;
    int price;
    phone(){
        cout<<"enter phone model:\n";
        getline(cin,name);
        cout<<"enter price:\n";
        cin>>price;
        cin.ignore();
    }
    void display(){
    cout<<"the "<<name<<" comes at a price of "<<price<<endl;
    }
};
int main()
{
    phone p1,p2;
    p1.display();
    p2.display();
    return 0;
}