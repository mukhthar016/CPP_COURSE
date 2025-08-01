#include<iostream>
#include<vector>
using namespace std;
class movies{
    public:
    string title;
    int rel_year;
    float rating;
    movies(string t,int ry,float rt ){
        title=t;
        rel_year=ry;
        rating = rt;
    }
    void display(){
        cout<<title<<" released in "<<rel_year<<" has rating of "<<rating<< "\n";
    }

};
int main(){
    int n;
    cout<<"enter the number of movies to be entered :\n";
    cin>>n;
    vector<movies> movie;
    for(int i=0;i<n;i++){
        string title;
        int year;
        float rating;
        cin.ignore();
        cout<<"enter the title of the movie :\n";
        getline(cin,title);
        cout<<"enter the release year of the movie :\n";
        cin>>year;
        cout<<"enter the ratings of the movie :\n";
        cin>>rating;
        
        movie.push_back(movies(title,year,rating));
        
    }
    for(movies s:movie){
        s.display();
    }
}