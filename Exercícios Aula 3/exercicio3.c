// Faça um programa que leia um número inteiro N e 
// depois imprima os N primeiros números naturais ímpares (sem usar comando condicional).
#include <stdio.h>
#include <locale.h>


int main () {
    setlocale(LC_ALL, "");

    int n, i=0;

    printf("Insira um número inteiro positivo: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf("%d \n", i);
        i++;
    }

}