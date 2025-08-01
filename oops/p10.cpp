#include<iostream>
#include<vector>
using namespace std;
class price{
    public:
    int pricee;
    price(int p):pricee(p){}
    void increase(){
        pricee+=1;
    }
    void display()const{
        cout<<pricee<<endl;
    }
};
int main(){
    vector<price> prices={price(8),price(10),price(12),price(14),price(16)};
    int size=prices.size();
    cout<<size<<endl;
    for(auto&a:prices){
        a.increase();

    }
    for(const auto&a:prices){
        a.display();
    }
}