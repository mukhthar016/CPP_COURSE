#include<iostream>
#include<vector>
using namespace std;
class counter{
    public:
    int num;
    counter(int c):num(c){}
    void increase(){
        num+=1;
    }
    void decrease(){
        num-=1;
    }
    void display()const{
        cout<<num<<endl;
    }
};
int main(){
    vector<counter> counts={counter(1),counter(2),counter(3),counter(4)};
    for(auto& a:counts){
        a.increase();
    }
    for(const auto&a : counts){
        a.display();
    }
    for(auto&a:counts){
        a.decrease();

    }
    for(const auto& a: counts){
        a.display();
    }
}