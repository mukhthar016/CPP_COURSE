#include<iostream>
int main(){
    int x;
    std::cout<<"enter the value of x:"<<std::endl;
    std::cin>>x;
    switch (x){
        case 1:
        std::cout<<"x is ist"<<std::endl;
        break;
        case 2:
        std::cout<<"x is 2nd"<<std::endl;
        break;
        case 3:
        std::cout<<"x is 3rd"<<std::endl;
        break;
        default:
        std::cout<<"x shoulod be 1,2,3"<<std::endl;
        break; 
    }

}