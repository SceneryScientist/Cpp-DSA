#include <iostream>
#include <algorithm>

int main(){
    int num1,num2;
    std::cin>>num1>>num2;
    int div=std::min(num1,num2);
    while (true){
        if(num1%div==0 && num2%div==0){
            break;
        }
        div--;
    }
    std::cout<<"HCF:"<<div;
}