#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL, "");

    int vetor[5];
    int i, maior = 0, menor = 0, indiceMaior=0, indiceMenor=0;
    
    for (i = 0; i < 5; i++) {
        printf("Insira um valor para compor o vetor na posição %iº:\n", i+1);
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior) {
            maior = vetor[i];
            indiceMaior = i; 

        } else if (vetor[i] < menor) {
            menor = vetor[i];
            indiceMenor = i;
        }
        
    }


    printf("O maior número no vetor é: %i.\nEle se encontra na posição %iº.\n", maior, indiceMaior+1);
    printf("O menor número no vetor é: %i.\nEle se encontra na posição %iº.\n", menor, indiceMenor+1);

}