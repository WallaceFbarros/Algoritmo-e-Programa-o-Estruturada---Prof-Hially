#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL, "");

    int vetor[10];
    int i, par = 0;
    
    for (i = 0; i < 10; i++) {
        printf("Insira um valor para compor o vetor na posição %iº:\n", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
           par++;   
        }
    }

    printf("O vetor tem %i números pares.", par);
}