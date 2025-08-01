#include<iostream>
#include<vector>
using namespace std;
class name{
    public:
    string name1;
    name(string n):name1(n){}
    void display()const{
        cout<<name1<<endl;
    }
    void changename(){
        name1="name";
    }
};
int main(){
    name myname ={"mukthar"};
    myname.display();
    myname.changename();
    myname.display();
}