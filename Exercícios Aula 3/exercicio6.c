// Elabore um algoritmo que permita ao usuário realizar a compra de frutas. 
// Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. 
// O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. 
// Ao final, apresente o valor total da compra. 

// 1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade 

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    printf(" ----------- LISTA DE FRUTAS -----------\n");
    printf("1 - ABACAXI - 5,00 a unidade............\n");
    printf("2 - MAÇÃ - 1,00 a unidade...............\n");
    printf("3 - PERA - 4,00 a unidade...............\n");
    printf("4 - VOLTAR AO MENU DE ESCOLHA DE FRUTAS.\n");
    printf("5 - SAIR DO MENU E MOSTRAR VALOR TOTAL..\n");

    int fruta = 0, quantidadeFrutas;
    float soma;

    do {
        printf("Insira a fruta que você deseja comprar: ");
        scanf("%d", &fruta);

        switch (fruta)
        {
        case 1:
            printf("Insira a quantidade de abacaxis você deseja: ");
            scanf("%d", &quantidadeFrutas);
            soma += quantidadeFrutas*5.0;
            break;
        case 2:
            printf("Insira a quantidade de maçãs você deseja: ");
            scanf("%d", &quantidadeFrutas);
            soma += quantidadeFrutas*1.0;
            break;
        case 3:
            printf("Insira a quantidade de peras você deseja: ");
            scanf("%d", &quantidadeFrutas);
            soma += quantidadeFrutas*4.0;
            break;
        case 4:
            printf(" ----------- LISTA DE FRUTAS -----------\n");
            printf("1 - ABACAXI - 5,00 a unidade............\n");
            printf("2 - MAÇÃ - 1,00 a unidade...............\n");
            printf("3 - PERA - 4,00 a unidade...............\n");
            printf("4 - VOLTAR AO MENU DE ESCOLHA DE FRUTAS.\n");
            printf("5 - SAIR DO MENU E MOSTRAR VALOR TOTAL..\n");
            break;
        default:
            break;
            }
        
    } while (fruta != 5);

    printf("O valor total da compra foi de R$%.2f", soma);





}