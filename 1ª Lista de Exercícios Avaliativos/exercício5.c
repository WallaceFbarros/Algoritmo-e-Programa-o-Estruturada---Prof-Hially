#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "");

    int numeroInteiro, aux;

    printf("Insira um número inteiro positivo: ");
    scanf("%i", &numeroInteiro);

    aux = numeroInteiro;

    while (aux != 0) {
        if (numeroInteiro % aux == 0) {
            printf("%i , ", aux);
        }
     aux = aux - 1;
    };
};