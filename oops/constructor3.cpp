#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
    int hp;
    int nm;
    int speed;
    int price;
    car(string b,string m,int y,int h,int n,int s,int p){
        brand = b;
        model = m;
        year = y;
        hp = h;
        nm = n;
        speed = s;
        price = p;
    }
    void display(){
        cout<<brand<<" "<<model<<" "<<year<<" has about "<<hp<<" brake horse power and "<<nm<<" nms of torque and it can launch from 0-60 in "<<speed<<" business days it comes at a price of rupees "<<price<<" lakh " <<"\n";

    }

};
int main(){
  string b;
  string m;
  int y;
  int h;
  int n;
  int s;
  int p;  
  cout<<"enter brand name "<<"\n";
  getline(cin,b);
  cout<<"enter model"<<"\n";
  getline(cin,m);
  cout<<"enter year of model"<<"\n";
  cin>>y;
  cout<<"enter the horsepower"<<"\n";
  cin>>h;
  cout<<"enter the torque"<<"\n";
  cin>>n;
  cout<<"enter the launch speed"<<"\n";
  cin>>s;
  cout<<"enter the price of the vehicle"<<"\n";
  cin>>p;
  car toyota(b,m,y,h,n,s,p);
  toyota.display();
}