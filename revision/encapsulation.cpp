#include<iostream>
#include<vector>
using namespace std;
class bank{
    private:
    string name;
    int balance;
    public:
    bank(string n,int b){
        name=n;
        if(b>0){
            balance=b;
        }
    }
    void withdraw(int amount){
        if(amount>0&&amount<=balance){
            balance-=amount;
            cout<<"withdrew amount "<<amount<<" available bnalance "<<balance<<endl;
        }
        else{
            cout<<"withdrawal cannot be approved "<<endl;
        }
    }
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<"deposited amount"<<amount<<" available balance "<<balance<<endl;
        }
        else{
            cout<<"deposit not approved "<<endl;
        }
    }
    int total_balance(){
        return balance;
    }
    void display(){
        cout<<name<<" has "<<balance<<" in his account "<<endl;
    }
};
int main(){
    bank mukthar("mukthar",2000000);
    
    mukthar.deposit(2000000);
    mukthar.display();
    mukthar.withdraw(150000);
    mukthar.display();
}