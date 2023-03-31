// Faça um programa que leia um número inteiro positivo N 
// e imprima todos os números naturais de 0 até N em ordem decrescente. 

#include <stdio.h>
#include <locale.h>


int main () {
    setlocale(LC_ALL, "");

    int n, i=0;

    printf("Insira um número inteiro positivo: ");
    scanf("%d", &n);
    
    for (i = n; i >= 0; i--) {
        printf("%d \n", i);
    }

}