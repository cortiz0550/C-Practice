#include <iostream>

int add(int x, int y) {
    // Add x and y together
    std::cout << "Running calculator...\n";
    return (x + y);
}

int main() {
    std::cout << "What is the sum of 8304 and 432?\n";
    std::cout << "The sum is " << add(8304, 432) << "\n\n";

    return 0;
}