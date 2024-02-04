#include <iostream>

int main()
{
    int a = 10;
    int b = 2;
    int *ptr = &b;
    int c = a / *ptr;

    std::cout << "Divisão: " << c << "\n";

    return 0;
}