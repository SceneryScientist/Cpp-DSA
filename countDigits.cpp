#include <iostream>

int main(){
    int n;
    std::cin>>n;
    int digits=0;
    if (n==0){
        digits=1;
    }
    while (n>0){
        digits+=1;
        n=n/10;
    }
    std::cout<< digits;
}