#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int roll;
    student(string n,int r){
        name = n;
        roll = r;
    }
    void display(){
        cout<<"name "<<name<<" roll "<<roll<<"\n";
    }
};
int main(){
    student mukthar("mukthar",23);
    student ahmed("ahmed",24);
    mukthar.display();
    ahmed.display();
    
}