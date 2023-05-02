#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL, "");

    int vetor[6];
    int i;
    
    for (i = 0; i < 6; i++) {
        printf("Insira um valor para compor o vetor na posição %iº:\n", i);
        scanf("%d", &vetor[i]);
    }

    printf("-----VETOR-----\n\n");
    for (i = 0; i < 6; i++) {
        printf("%i ", vetor[i]);
        
    }

    printf("\n\n-----VETOR INVERSO-----\n\n");

    for (i = 5; i >= 0; i--) {
       printf("%i ", vetor[i]);
    }
}