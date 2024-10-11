#include <iostream>

int main() {
    int n1, n2;
    std::cin >> n1 >> n2;

    if (n1 > n2) {
        std::cout << n1 << std::endl;
    } else {
        std::cout << n2 << std::endl;
    }

    std::cout << (n1 > n2 ? n1 : n2) << std::endl;

    return 0;
}