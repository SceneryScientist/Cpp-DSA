#include <iostream>
#include <vector>
#include <algorithm>


void reverseArray(std::vector<int>& arr) {
    int p1 = 0, p2 = arr.size() - 1;
    while (p1 < p2) {
        std::swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    reverseArray(arr);
    for (int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}
