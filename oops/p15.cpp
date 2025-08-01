#include<iostream>
using namespace std;
class bank{
    private:
    string name;
    int balance;
    public:
    bank(string n,int b){
        name=n;
        if(b>0){
            balance =b;
        }
        else{
            balance=0;
        }
    }
    void withdraw(int amount){
        if(amount>0&&amount<=balance){
            balance -= amount;
            cout<<"withdrew "<<amount<<" balance "<<balance<<endl;
        }
        else{
            cout<<"withdraw not allowed"<<endl;
        }
        
    }
    void deposit(int amount){
        if(amount>0){
            balance += amount;
        }
        else{
            cout<<" amount cannot be negative "<<endl;
        }
    }
    int balanceamt(){
        return balance;
    }
    void display(){
        cout<<name<<" has "<<balance<<" in his account\n";
    }

};
int main(){
    bank mukthar("mukthar",2000);
    
    
    mukthar.deposit(2000);
    cout<<mukthar.balanceamt()<<endl;
    mukthar.withdraw(2000);
   mukthar.display();
}