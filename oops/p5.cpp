#include<iostream>
#include<vector>
using namespace std;
class movie{
    public:
    string name;
    int  year;
    movie(){
        cout<<"enter movie name: \n";
        getline(cin,name);
        cout<<"enter release year: \n";
        cin>>year;
        cin.ignore();
    }
    void display(){
        cout<<"the movie: "<<name<<" was released in year: "<<year<<endl;
    }
};
int main(){
    movie m1,m2;
    m1.display();
    m2.display();
    return 0;
}