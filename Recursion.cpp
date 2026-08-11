#include <iostream>
#include <string>

void printName(int n,int count,std::string name){
    if (count==n) return;
    std::cout<<name<<" ";
    count++;
    printName(n,count,name);
}

void printToN(int start,int n){
    if (start>n) return;
    std::cout<<start<<" ";
    start++;
    printToN(start,n);
}

void printToOne(int n,int stop){
    if (n<stop) return;
    std::cout<<n<<" ";
    n--;
    printToOne(n,stop);
}

int sumOfN(int n){
    if (n<=0) return 0;
    return n+sumOfN(n-1);
}

int fact(int n){
    if (n<=1) return 1;
    return n*fact(n-1);
}


int main(){
    int n;
    std::cin>>n;
    //printName(n,0,"Harry");
    //printToN(1,n);
    //printToOne(n,1);
    //std::cout<<sumOfN(n);
    std::cout<<fact(n);
}