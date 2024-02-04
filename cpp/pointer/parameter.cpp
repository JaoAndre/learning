#include <iostream>

void aumentar(int *x)
{
    *x += 1;
}

int main()
{
    int a = 10;
    aumentar(&a);

    std::cout << "Aumentado: " << a;

    return 0;
}