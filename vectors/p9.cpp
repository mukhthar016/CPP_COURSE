#include<iostream>
#include<vector>
#include<string>
using namespace std;
class cat{
    public:
    string name;
    int age ;
    cat(string n,int a){
        name =n;
        age =a;
    }
    void display(){
        cout<<name<<" is "<<age<<" years old"<<"\n";
    }
};
int main()
{
    int n;
    cout<<"enter the number of cats :\n";
    cin>>n;
    vector<cat> cats;
    cin.ignore();
    for(int i=0;i<n;i++){
        string name;
        int age;
        cout<<"enter the name of the cat :\n";
        getline(cin,name);
        cout<<"enter the age of the cat :\n";
        cin>>age;
        cin.ignore();
        cats.push_back(cat(name,age));

    }
    for(cat c:cats){
        c.display();
    }
}
