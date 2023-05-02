#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL, "");

    int vetor[10], numeroPositivo=0, numeroNegativo=0;
    int i;



    for (i = 0; i < 10; i++) {

        printf("Insira um valor no vetor %i:\n", i+1);
        scanf("%i", &vetor[i]);

        if (vetor[i] > 0) {
            numeroPositivo += vetor[i];
        } else {
            numeroNegativo += 1;
        }
        
    }

    printf("O vetor tem %i números negativos.\n", numeroNegativo);
    printf("A soma de todos os números positivos do vetor é: %i.\n", numeroPositivo);
    
    
}
