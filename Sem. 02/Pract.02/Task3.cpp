#include <iostream>

int main() {
    char symbol;
    std::cin >> symbol;

    switch(symbol) {
        case 'I':
             std::cout << (int) 'I' << std::endl;
             break;
        case 'V':
             std::cout << (int) 'V' << std::endl;
             break;
        case 'X':
             std::cout << (int) 'X' << std::endl;
             break;
        case 'L':
             std::cout << (int) 'L' << std::endl;
             break;
        case 'C':
             std::cout << (int) 'C' << std::endl;
             break;
        case 'D':
             std::cout << (int) 'D' << std::endl;
             break;
        case 'M':
             std::cout << (int) 'M' << std::endl;
             break;
        default:
            std::cout << -1 << std::endl;
    }

    return 0;
}