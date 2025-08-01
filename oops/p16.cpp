#include<iostream>
using namespace std;
class account{
    private:
    string name;
    int amount;
    public:
    account(string n,int a){
        name=n;
        if(a>0){
          amount =a;  
        }
        else{
            amount=0;
        }
    }
    void deposit(int a){
        if(a>0){
            amount+=a;
        }
        else{
            cout<<"cannot deposit negative amount \n";
        }
    }
    void withdraw(int a){
        if(a>0&&a<=amount){
            amount-=a;
            cout<<"withdrew "<<a<<" from your account \n";
        }
        else{
            cout<<"withdrawal cannot be approved or min balance \n";

        }
    }
    int balance(){
        return amount;
    }
    void display(){
        cout<<name<<" has "<<amount<<" in their bank account "<<endl;
    }
};
int main(){
   string username;
   int amount;
   cout<<"enter user name:\n";
   getline(cin,username);
   cout<<"enter amount:\n";
   
   cin>>amount;
   account mukthar(username,amount);
   int depamt,withamt;
   cout<<" enter deposit amount:\n";
   cin>>depamt;
   mukthar.deposit(depamt);
   mukthar.display();
   cout<<"enter withdrawal amount:\n";
   cin>>withamt;
   mukthar.withdraw(withamt);
   mukthar.display();
}