#include <iostream>

int average(int, int);
long average(long, long);
float average(float, float);

int main() {

    int i_num = 2;
    long l_num = 4000000;
    float f_num = 3.6;

    std::cout << average(i_num, i_num) <<" "<< average(l_num, l_num) << " " << average(f_num, f_num);

    return 0;
}

int average(int num1, int num2) {
    return ((num1 + num2) / 2);
}

long average(long num1, long num2) {
    return ((num1 + num2) / 2);
}

float average(float num1, float num2) {
    return ((num1 + num2) / 2);
}