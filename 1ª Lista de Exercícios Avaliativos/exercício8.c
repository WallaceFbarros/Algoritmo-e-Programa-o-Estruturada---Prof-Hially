#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "");

    int numeroInteiro, menor, maior;

    printf("Digite um número inteiro: ");
    scanf("%i", &numeroInteiro);

    menor =  numeroInteiro;
    maior = numeroInteiro;

    while (numeroInteiro >= 0) {
        if (numeroInteiro > maior) {
            maior = numeroInteiro;
        } if (numeroInteiro < menor) {
            menor = numeroInteiro;
        }
        printf("Digite outro número inteiro: ");
        scanf("%i", &numeroInteiro);
    }

    printf("O maior número é: %i", maior);
    printf("O menor número é: %i", menor);

}