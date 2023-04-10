#include <iostream>

int main()
{
    int grade = 0;
    int passing_grade;

    std::cout << "Enter your grade from 0 - 100: ";
    std::cin >> grade;
    

    std::cout << "\nEnter the passing grade for this course: ";
    std::cin >> passing_grade;

    if (grade > passing_grade) {
        std::cout << "\nYou passed!";
    } else {
        std::cout << "\nYou did not pass.";
    }
    



    return 0;
}