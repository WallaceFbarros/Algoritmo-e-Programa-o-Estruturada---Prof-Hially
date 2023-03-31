// Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    int i = 0, soma = 0;


    for (i = 0; i <= 50; i++) {
        soma += (i * 2);
    }
    printf("%d", soma);
}