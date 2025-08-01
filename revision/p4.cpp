#include<iostream>
using namespace std;
class phone{
    public:
    string name;
    phone(string p){
        name=p;
    }
    void display(){
        cout<<name;
    }
};
int main(){
    phone p("motorola");
    p.display();
}