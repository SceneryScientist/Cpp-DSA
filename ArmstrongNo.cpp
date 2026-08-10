#include <iostream>
#include <algorithm>
#include <cmath>

int main(){
    int n;
    std::cin>>n;
    int num=n;
    int digits=0;
    if (n==0) digits=1;
    while (n>0){
        digits+=1;
        n=n/10;
    }

    int sum=0;
    n=num;
    while (n>0){
        sum+=std::pow(n%10,digits);
        n=n/10;
    }
    if (num==sum && num!=0){
        std::cout<<"Armstrong Number";
    }
    else std::cout<<"Not Armstrong";
}