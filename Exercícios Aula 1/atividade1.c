//Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e 
//despesas eventuais (também solicitadas pelo teclado). 
//Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria


#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "");

    float precoMercadoria, freteMercadoria, despesasEventuais, valorDeVenda, lucroMercadoria;

    printf("Digite o valor da mercadoria em reais: ");
    scanf("%f", &precoMercadoria);

    printf("Digite o valor do frete da mercadoria em reais: ");
    scanf("%f", &freteMercadoria);

    printf("Digite o valor de eventuais despesas em reais: ");
    scanf("%f", &despesasEventuais); 

    printf("Digite o valor que a mercadoria será vendida: ");
    scanf("%f", &valorDeVenda); 

    lucroMercadoria =  valorDeVenda - (precoMercadoria + freteMercadoria + despesasEventuais);

    printf("O lucro na mercadoria que será vendida será de %.2f %% sobre o valor de venda do produto.", (lucroMercadoria * 100) / valorDeVenda);
}