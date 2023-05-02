#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL, "");

    float vetor[15], notas=0, media=0;
    int i;



    for (i = 0; i < 15; i++) {

        printf("Insira a nota do aluno %i:\n", i+1);
        scanf("%f", &vetor[i]);

        notas += vetor[i];
        
    }

    media = notas / 15;

    printf("A média da turma foi de: %f", media);
    
}
