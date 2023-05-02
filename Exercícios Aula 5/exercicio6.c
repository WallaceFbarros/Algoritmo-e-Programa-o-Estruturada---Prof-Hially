#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL, "");

    int vetor[10];
    int i, maior = 0, menor = 0;
    
    for (i = 0; i < 10; i++) {
        printf("Insira um valor para compor o vetor na posição %iº:\n", i);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 0; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i]; 
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("O maior número do vetor é %i e o menor é %i", maior, menor);
}