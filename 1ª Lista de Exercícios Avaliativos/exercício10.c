// Faça um programa que leia 10 inteiros e imprima sua média.

#include <stdio.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL, "");

    int i = 0, numeroInteiro, aux;
    float media;

    while (i < 10) {
        printf("Digite um número inteiro positivo: ");
        scanf("%i", &numeroInteiro);

        if (numeroInteiro >= 0) {
            aux = aux + numeroInteiro;
            media = (aux * 1.0) / 10;
            i = i + 1;
        } else {
            printf("Não foi digitado um valor positivo, insira um número inteiro positivo.");
        }
    }
        printf("A média é: %.2f", media);
};