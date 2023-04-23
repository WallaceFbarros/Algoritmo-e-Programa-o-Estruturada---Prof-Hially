// Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000
// que são múltiplos de 3 ou 5.

#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "");

    int i = 0, soma;
    
    for(i =999 ;i >= 0 ; i--) {
        if(i % 5 == 0 || i % 3 == 0) {
            soma += i;
        }
    }
    printf("A soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5 é: %i",soma);

};