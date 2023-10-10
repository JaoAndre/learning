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

/*

    ? "void aumentar(int *x)"
        * Aqui, declaramos uma função chamada 'aumentar' que aceita um parâmetro 'x' que é um ponteiro para um inteiro (int *).
        * Isso significa que 'x' deve receber o endereço de memória de uma variável do tipo inteiro.

    ? "aumentar(&a);"
        * Aqui, chamamos a função 'aumentar' e passamos o endereço de memória da variável 'a' como argumento, usando o operador de endereço (&).
        * Isso permite que a função modifique o valor de 'a', mesmo fora da função principal.

        ? "*x += 1;"
            * Dentro da função 'aumentar', usamos o operador de desreferenciamento (*) para acessar o valor apontado pelo ponteiro.
            * Incrementamos esse valor em 1.
            * Como 'x' é um ponteiro para 'a', isso incrementa o valor de 'a'.

*/