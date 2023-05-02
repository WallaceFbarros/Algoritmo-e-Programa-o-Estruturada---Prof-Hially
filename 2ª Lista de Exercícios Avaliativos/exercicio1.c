#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    
    setlocale(LC_ALL, "");

    int i, voltas = 0, melhorVolta = 0;
    float tempo = 0, mediaTempo = 0, melhorTempo = 0, somaTempo = 0;


    printf("Insira quantas voltas a corrida vai ter: ");
    scanf("%i", &voltas);

    for (i = 1; i <= voltas; i++) {

        printf("Insira o tempo do piloto na volta %iº", i);
        scanf("%f", &tempo);
        somaTempo += tempo;

        if (tempo > melhorTempo) {
            melhorTempo = tempo;
            melhorVolta = i;
        }
    }

    mediaTempo = somaTempo / voltas;

    printf("O melhor tempo do piloto foi: %.2f\n", melhorTempo);
    printf("A volta que ocorreu seu melhor tempo foi %i volta\n", melhorVolta);
    printf("O tempo médio das suas voltas foi: %.2f\n", mediaTempo);

}
