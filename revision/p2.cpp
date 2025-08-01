#include<iostream>
using namespace std;
void triangle(int n){
    for(int i=0;i<n;i++){//sets number of rows to be printed
        for(int j=1;j<=i+1;j++){//nested loop sets number of columns to be printed
            cout<<"*";
        }
        cout<<endl;
    }
}
void pyramid(int n){
    for(int i=0;i<n;i++){//rows
        for(int j=n-i;j>0;j--){//leading space before printing column
            cout<<"*";;
        }
        for(int k=1;k<=2*i+1;k++){//prints column
            cout<<"*";
        }
        cout<<endl;
    }
}
void hoolowpyramid(int n){
    for(int i=0;i<n;i++){//rows
        for(int j=n-i;j>0;j--){//leading space before column
            cout<<" ";
        }
        for(int k=1;k<=2*i+1;k++){//prints column
            if(k==1||k==2*i+1||i==n-1){//prints column only prints starting and ending star and all the stars in the last row
                cout<<"*";
            }
            
            else{
                cout<<" ";//prints space if above condition is true that is this prints hollow side of the pyramid
            }
        }
        
        cout<<endl;
    }
}
int main(){
    triangle(7);
    pyramid(6);
    hoolowpyramid(6);
}