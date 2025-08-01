#include<iostream>
#include<vector>
using namespace std;
class counter{
    public:
    int count;
    counter(int c):count(c){}
    void decrease(){
        count-=1;
    }
    void increase(){
        if(count<5){
            count+=1;
        }
    }
    void display()const{
        cout<<count<<endl;
    }
};
int main(){
    vector<counter> counts={counter(3),counter(1),counter(2)};
    cout<<"----before decreasing ----:\n";
    for(const auto& a : counts){
        a.display();
    }
    
    for(auto& a : counts){
        if(a.count != 1){
        a.decrease();
        }
    }
    cout<<"-----after decreasing-----\n";
    for(auto& a : counts){
        a.display();
    }
    for(auto& a : counts){
       a.increase();
        }
    
    cout<<"-----after increasing-----\n";
    for(auto& a : counts){
        a.display();
    }
}