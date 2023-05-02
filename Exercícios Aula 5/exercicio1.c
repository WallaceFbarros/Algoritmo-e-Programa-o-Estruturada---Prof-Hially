#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL, "");

    int vetor [6] = {1, 0, 5, -2, -5, 7};
    int soma = 0, i = 0;

    soma = vetor[0] + vetor[1] + vetor[5];

    vetor [4] = 100;

    printf("A soma dos vetores 0, 1, 5 é: %i", soma);
    
    for (i = 0; i < 6; i++) {
        printf("\nVetor na posição %i tem como valor %i", i, vetor[i]);
    };

}