#include<iostream>
int main(){
    int row =4;
    std::cout<<"enter the size of row"<<std::endl;
    for(int i=1;i<= row;i++){
        for(int j=1;j<=i;j++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
    return 0;
}