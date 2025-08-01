#include<iostream>
#include<vector>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    student(string n,int r){
        name = n;
        rollno =r;
    }
    void display(){
        cout<<"name :"<<name<<"\n roll no :"<<rollno<<"\n";
    }
};
int main(){
    vector<student> students;
    students.push_back(student("mukthar",8));
    students.push_back(student("ahmed",9));
    students.push_back(student("ali",10));
    students.push_back(student("john",12));
    int  size = students.size();
    cout<<size<<"\n";
    for( student s: students){
        s.display();
    }
}