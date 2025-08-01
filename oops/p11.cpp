#include<iostream>
#include<vector>
using namespace std;
class car{
    public:
    string name;
     void display()const{
        cout<<name<<endl;
     }
};
class car2{
    public:
    string name;
    car2(string n){
        name=n;
    }
    void display()const{
        cout<<name<<endl;
    }
};
class car3{
    public:
    string name;
    car3(){
        //cin.ignore();
        cout<<"enter the name of car:\n ";
        getline(cin,name);

        
    }
    void display()const{
        cout<<name<<endl;
    }
};
class car4{
    public:
    string name;
    car4(string n):name(n){};
    void display()const{
        cout<<name<<endl;
    }
};
int main(){
    car mycar;
    mycar.name ="toyota";
    cout<<"car1 class"<<endl;
    mycar.display();
    cout<<"car2 class"<<endl;
    car2 mycar2("toyota");
    mycar2.display();
    cout<<"car3 class"<<endl;
    car3 mycar3;
    mycar3.display();
    cout<<"car4 class"<<endl;
    car4 mycar4={"toyota"};
    mycar4.display();
}