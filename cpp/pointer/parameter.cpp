#include <iostream>

void grow(int *x)
{
    *x += 1;
}

int main()
{
    int a = 10;
    grow(&a);

    std::cout << "Aumentado: " << a;

    return 0;
}