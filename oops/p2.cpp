#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    void display(){
        cout<<"name "<<name<<" roll no "<<roll<<"\n";
    }
};
int main(){
    student mukthar;
    student ahmed;
    mukthar.name="mukthar";
    mukthar.roll=22;
    ahmed.name="ahmed";
    ahmed.roll=23;
    mukthar.display();
    ahmed.display();
}