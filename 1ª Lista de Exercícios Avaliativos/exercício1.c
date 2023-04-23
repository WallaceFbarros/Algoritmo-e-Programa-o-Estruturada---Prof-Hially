// Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
// produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
// Apresente o resultado da seguinte forma:
// DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
// DIFERENCA = (“valor de DIFERENCA”)



#include <stdio.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL, "");

    int a, b,c, d, resultado;

    printf("Insira quanto vale A: \n");
    scanf("%i", &a);
    printf("Insira quanto vale B: \n");
    scanf("%i", &b);
    printf("Insira quanto vale C: \n");
    scanf("%i", &c);
    printf("Insira quanto vale D: \n");
    scanf("%i", &d);

    resultado = (a * b) - (c * d);

    printf("%i * %i - %i * %i\n", a, b,c, d);
    printf("%i", resultado);

};