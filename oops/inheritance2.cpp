#include<iostream>
using namespace std;
class motorbike{
    public:
    void sound(){
        cout<<"motorbike makes sound:\n";
    }
};
class ninja:public motorbike{
    public:
    void roar(){
        cout<<"bike roars like a dragon vroom vroom\n";
    }
};
int main(){
    ninja b;
    b.sound();
    b.roar();
}