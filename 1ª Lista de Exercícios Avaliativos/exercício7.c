// Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
// Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
// ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
// anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "");

    int fibonacci=0, aux=1, cont, numeroInteiro;
    
    printf("Insira um número maior ou igual a zero : ");
    scanf("%i", &numeroInteiro);
    printf("Sequência:\n 0 ");

    for(cont = 1; cont < numeroInteiro; cont++) {
        
        fibonacci = fibonacci + aux;
        aux = fibonacci - aux;
        printf("%i ",fibonacci);   
    }

    printf("\nO termo %i da sequência de Fibonacci é: %i",numeroInteiro,fibonacci);
}