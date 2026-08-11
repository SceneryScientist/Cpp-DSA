#include <iostream>

int main() {
    int N;
    if (!(std::cin >> N) || N <= 0) return 0;

    std::cout << "[";
    int i;
    for (i=1; i * i < N; ++i) {
        if (N % i == 0) { 
            std::cout << i<<", ";
        }
    }
    
    if (i * i == N) {
        std::cout << i;
        i--; 
    } 
    else i--;

    for (int j = i; j >= 1; --j) {
        if (N % j == 0) {
            int partner = N / j;
            if (j * j != N) {
                std::cout<<partner<<", ";
            }
        }
    }

    std::cout << "]\n";
}
