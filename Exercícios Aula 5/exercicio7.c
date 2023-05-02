#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL, "");

    int vetor[10];
    int i, maior = 0, posicao = 0;
    
    for (i = 0; i < 10; i++) {
        printf("Insira um valor para compor o vetor na posição %iº:\n", i);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for (i = 0; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("-----VETOR-----\n");

    for (i = 0; i < 10; i++) {
        printf("%i ", vetor[i]);
    }

    printf("\nO maior elemento do vetor é: %i", maior);
    printf("\nA posição do maior elemento é %i", posicao);
}