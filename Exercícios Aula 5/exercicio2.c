#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "");

    int vetor[6];
    int i;

    for (i = 0; i < 7; i++) {
        printf("Insira um valor para compor o vetor na posição %iº:\n", i+1);
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }

    for (i = 0; i < 7; i++) {
        printf("\nO vetor de posição %iº tem como valor %i.", i+1, vetor[i]);
    }


}