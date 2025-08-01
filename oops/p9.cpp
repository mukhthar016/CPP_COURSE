#include<iostream>
#include<vector>
using namespace std;
class counter{
    public:
    int value;
    counter(int v):value(v){}
    void increase(){
        value+=1;
    }
    void display()const{
        cout<<value<<endl;
    }
};
int main(){
    vector<counter> counters={counter(5),counter(6),counter(7),counter(8)};
    for(auto&a:counters){
        a.increase();
    }
    for(const auto&a:counters){
        a.display();
    }
    return 0;
}