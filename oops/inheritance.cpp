#include<iostream>
using namespace std;
class animal {
    public:
    void sound(){
        cout<<"animal makes sound:\n";
    }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"dog barks woof woof:\n";
    }
};
int main(){
    dog d;
    d.sound();
    d.bark();
}