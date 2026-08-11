#include <iostream>

int main(){
    int N;
    std::cin>>N;
    if (N<=1) std::cout<<"False";

    bool isPrime = true;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            isPrime = false;
            break; 
        }
    }
    
    if (isPrime) std::cout << "True";
    else std::cout << "False";
}   