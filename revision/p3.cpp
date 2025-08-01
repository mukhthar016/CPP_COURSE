#include<iostream>
using namespace std;
class phone{
    public:
    string name;
    void display(){
        cout<<"the name is"<<name;
    }
};
int main(){
    phone p;
    p.name="motorola";
    p.display();
}