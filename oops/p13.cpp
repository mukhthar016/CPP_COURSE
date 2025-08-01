#include<iostream>
#include<vector>
using namespace std;
class count{
    public:
    int counter;
    count(int c):counter(c){}
    void reset(){
        counter=0;
    }
    void increase(){
        counter += 1;
    }
    void display()const{
     cout<<counter<<endl;
    }
};
int main(){
    vector<count> counts={count(1),count(2),count(3)};
    for(auto& a : counts){
        a.increase();
    }
    for(const auto& a : counts){
        a.display();
    }
    for(auto& a : counts){
        a.reset();
    }
    for(const auto& a : counts){
        a.display();
    }


}