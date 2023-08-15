#include <iostream>

int main() {
    long long int space = 9;
    while (true) {
        space *= 9;
        std::cout << "Drive with " << space << " units of space" << std::endl;
    }
    return 0;
}