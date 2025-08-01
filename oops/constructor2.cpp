#include<iostream>
using namespace std;
class bike{
    public:
    string name;
    int horsepower;
    int torque;
    bike(string n,int h,int t){
        name = n;
        horsepower = h;
        torque =t;
    }
    void display(){
        cout<<name<<" gives about "<<horsepower<<"  horsepower and "<<torque<<" nm of torque"<<"\n";
    }
};
int main(){
    bike himalayan("himalayan",40,50);
    himalayan.display();
    bike hyabusa("hyabusa",120,120);
    hyabusa.display();
}