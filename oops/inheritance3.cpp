#include<iostream>
using namespace std;
class bank{
    protected:
    string account_name;
    int balance;
    public:
    bank(string s,int b){
        account_name=s;
        if(b>0){
            balance = b;
        }
        else{
            balance =0;
        }
    }
    void display()const{
     cout<<account_name<<" has "<<balance<<endl;
    }
    void withdraw(int amount){
        if(amount>0&&amount<=balance){
            balance -= amount;
            cout<<"withdrew "<<amount<<" from you account\n";
        }
        else{
          cout<<"insufficient balance\n";
        }
    }
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<"added fund "<<amount<< " in your account\n";
        }
    }
};
class interest:public bank{
   private:
   int interestr;
   public:
   interest(string s,int b,int r):bank(s,b){
    interestr = r;

   }
   void interestrate(){
    int interest = balance*interestr/100;
    balance += interest;
    cout<<interest<<"added"<<endl;

   }
};
int main(){
    interest r("mukthar",4000,3.5);
    r.display();
    r.deposit(4000);
    r.display();
    r.withdraw(4000);
    r.display();
    r.interestrate();
}