#include<iostream>
using namespace std;
int printdescending(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<endl;
    return printdescending(n-1);
}
int main(){
    printdescending(10);
    return 0;
}