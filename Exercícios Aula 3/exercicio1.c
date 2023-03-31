// Faça um programa que leia um número inteiro positivo N e 
// imprima todos os números naturais de 0 até N em ordem crescente. 

#include <stdio.h>
#include <locale.h>


int main () {

    int n, i=0;

    printf("Insira um número inteiro positivo: ");
    scanf("%d", &n);
    
    for (i = 0; i <= n; i++) {
        printf("%d \n", i);
    }

}




