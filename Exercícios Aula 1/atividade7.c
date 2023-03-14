// O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
// Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, 
// calcular e escrever o custo final ao consumidor. 


#include <stdio.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL, "");

    float custoFabrica, percentualDistribuidor = 0.28, percentualImpostos = 0.45, custoFinal;

    printf("Insira o custo de fábrica de um carro: ");
    scanf("%f", &custoFabrica);

    custoFinal = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * percentualImpostos);

    printf("O consumidor deverá pagar: R$%.2f para adquirir o carro.", custoFinal);
}