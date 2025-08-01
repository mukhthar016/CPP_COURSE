#include<iostream>
#include<vector>
using namespace std;
class library{
    public:
    string book_name;
    string auth_name;
    library(string b,string a){
        book_name=b;
        auth_name=a;
    }
    void display()const{
        cout<<"the "<<book_name<<" is written by "<<auth_name<<endl;

    }
};
int main(){
    vector<library> lib;
    int n;
    cout<<"enter the number of books:\n";
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        
        string book;
        string author;
        cout<<"enter book name:\n";
        
        getline(cin,book);
        cout<<"enter author name:\n";
        getline(cin,author);
        lib.push_back(library(book,author));
    }
    for(const auto& a:lib){
        a.display();
    }
}