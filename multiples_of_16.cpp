#include <iostream>

int main()
{
    int counter = 1;

    while (counter < 100) {
        std::cout << counter * 16 << "\n";
        counter++;
    }

    return 0;
}