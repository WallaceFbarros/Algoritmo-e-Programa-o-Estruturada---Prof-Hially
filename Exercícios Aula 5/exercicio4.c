#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL, "");

    int vetor[8];
    int x, y, i, soma;
    
    for (i = 0; i < 8; i++) {
        printf("Insira um valor para compor o vetor na posição %iº:\n", i);
        scanf("%d", &vetor[i]);
    }

    printf("Insira dois valores X e Y que correspondem respectivamente a duas posições do vetor inserido(lembrando que o vetor começa na posição 0): ");
    scanf("%i %i", &x, &y);
    fflush(stdin);

    if ((x < 0 || x > 7) && (y < 0 || y > 7)) {

        printf("Valores invalidos");
    
    } else {

    soma = vetor[x] + vetor[y];
    
    printf("A soma do vetor de posição X com o da posição Y é: %i", soma);

    }
}