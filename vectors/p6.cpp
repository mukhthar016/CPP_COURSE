#include<iostream>
#include<vector>
using namespace std;
class cars{
    public:
    string car;
    int price;
    cars(string c,int p){
        car = c;
        price =p;
    }
    void display(){
        cout<<car<<" costs about "<<price<<" rupees "<<"\n";
    }
};
int main(){
vector<cars> car;
car.push_back(cars("toyota",34500));
car.push_back(cars("honda",45000));
car.push_back(cars("suzuki",36500));
car.push_back(cars("cadillac",38500));
car.push_back(cars("ford",39500));
int size = car.size();
for(int i=0;i<size;i++){
   car[i].display();
}
}
