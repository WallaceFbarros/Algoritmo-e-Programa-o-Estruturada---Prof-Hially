#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL, "");

    int vetor[10];
    int vetorQuadrado[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Insira um valor para compor o vetor na posição %iº:\n", i+1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        vetorQuadrado[i] = vetor[i] * vetor[i];
    }

    printf("-----VETOR DOS NÚMEROS REAIS PREENCHIDOS-----");

    for (i = 0; i < 10; i++) {
        printf("\n%i", vetor[i]);
    }

    printf("\n----VETOR DOS NÚMEROS REAIS AO QUADRADO-----");

    for (i = 0; i < 10; i++) {
        printf("\n%i", vetorQuadrado[i]);
    }
}