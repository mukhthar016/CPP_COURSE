#include<iostream>
#include<vector>
using namespace std;
class students{
    public:
    string name;
    int roll_no;
    int marks;
    students(){
        
        cout<<"enter the name of the student:\n";
        getline(cin,name);
        cout<<"enter the roll no of the student:\n";
        cin>>roll_no;
        cout<<"enter the marks obtained by the student:\n";
        cin>>marks;
        cin.ignore();
    }
    void display()const{
        cout<<name<<" with roll no "<<roll_no<<" has obtained "<<marks<<" marks \n";
    }
};
int main(){
    vector<students> classroom;
    int n;
    cout<<"enter the number of students to be entered:\n";
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        students s;
        classroom.push_back(s);
    }
    for(const auto& a:classroom){
        a.display();
    }
    return 0;
}