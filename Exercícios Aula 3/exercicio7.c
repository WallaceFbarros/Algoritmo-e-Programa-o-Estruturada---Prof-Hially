// Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. 
// Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, 
// a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. 
// Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. 


#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    int n, termoAtual = 1, termoAnterior = 0, aux;

    printf("Insira um número inteiro, que seja maior ou menor a zero: ");
    scanf("%d", &n);

    printf("\n 0 \n");

    n--;

    while (n) {
        printf("%d \n", termoAtual);
        aux = termoAtual;
        termoAtual += termoAnterior;
        termoAnterior = aux;
        n--;
    }
}


    