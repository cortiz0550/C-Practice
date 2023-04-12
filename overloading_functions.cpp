#include <iostream>

int average(int, int);
long average(long, long);
float average(float, float);

int main()
{
    int x = 6, y = 8;
    long w = 543003494, z = 432432411;
    float a = 7.6, b = 7.905;

    std::cout << "\nThe average of " << x << " and " << y << " is " << average(x, y);
    std::cout << "\nThe average of " << w << " and " << z << " is " << average(w, z);
    std::cout << "\nThe average of " << a << " and " << b << " is " << average(a, b);

    return 0;
}

int average(int x, int y) {
    return (x + y) / 2;
}

long average(long x, long y) {
    return (x + y) / 2;
}

float average(float x, float y) {
    return (x + y) / 2;
}