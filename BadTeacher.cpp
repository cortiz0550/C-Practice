#include <iostream>

int main()
{
    char grade;
    std::cout << "Enter your letter grade (ABCDEFGH): ";
    std::cin >> grade;
    switch (grade) {
        case 'A':
            std::cout << "Finally!\n";
            break;
        case 'B':
            std::cout << "Almost there...\n";
            break;
        case 'C':
            std::cout << "Average.\n";
            break;
        case 'D':
            std::cout << "C'mon dude.\n";
            break;
        case 'F':
            std::cout << "*silence*\n";
            break;
        case 'E':
            std::cout << "Uh what?\n";
            break;
        case 'G':
            std::cout << "Now this is ridiculous.\n";
            break;
        case 'H':
            std::cout << "*Leaves the room*\n";
            break;
    }

    return 0;
}