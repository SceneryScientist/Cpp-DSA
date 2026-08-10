#include <iostream>

int main(){
    int n;
    std::cin>>n;
    int num=n;
    int rev=0;
    while (n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if (num==rev){
        std::cout<<"Palindrome Number";
    }
    else std::cout<<"Not Palindrome";
}