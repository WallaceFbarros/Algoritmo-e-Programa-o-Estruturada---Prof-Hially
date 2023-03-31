// Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.
#include <stdio.h>
#include <locale.h>


int main () {
    setlocale(LC_ALL, "");

    int multiplos = 0, i =0;

    do {
        if (i % 3 == 0) {
            printf("%d \n", i);
            multiplos++;
        }
        i++;
    } while (multiplos <= 5);
    
    
}