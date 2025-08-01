#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    int year;
    void display(){
        cout<<"brand "<<brand<<" year "<<year<<"\n";
    }
};
int main(){
    car mycar;
    mycar.brand ="toyota";
    mycar.year =2020;
    mycar.display();
}