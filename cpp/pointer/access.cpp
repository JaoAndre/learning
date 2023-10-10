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

/*

    ? "int *ptr = &b;"
        * Aqui, criamos a variável 'ptr' que é um ponteiro para um inteiro (int *).
        * Ele pega o endereço de memória da variável 'b' usando o operador de endereço (&).

    ? "int c = a / *ptr;"
        * Aqui, dividimos o valor de 'a' pelo valor de 'ptr'.
        * Usamos o operador de desreferenciamento (*) para acessar o valor apontado pelo ponteiro.
        * O resultado da divisão é armazenado na variável 'c'.

*/