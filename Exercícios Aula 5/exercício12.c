#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL, "");

    int vetor[5];
    int i, maior = 0, menor = 0, media=0, soma = 0;
    
    for (i = 0; i < 5; i++) {
        printf("Insira um valor para compor o vetor na posição %iº:\n", i+1);
        scanf("%d", &vetor[i]);
        
        soma += vetor[i];
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 0; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i]; 
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

        printf("-------LISTA DE VETORES-------\n");

    for (i = 0; i < 5; i++) {
        printf("%i\n", vetor[i]);
    }

    media = soma / 5;

    printf("O maior número no vetor é: %i.\n", maior);
    printf("O menor número no vetor é: %i.\n", menor);
    printf("A média da soma de todos os vetores é: %i.", media);
}