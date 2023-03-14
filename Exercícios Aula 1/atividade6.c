// Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário. 

#include <stdio.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL, "");

    float salarioMensalAtual, percentualReajuste, novoSalario;

    printf("Insira seu salário mensal: ");
    scanf("%f", &salarioMensalAtual);

    printf("Insira o percentual de reajuste que você vai receber: ");
    scanf("%f", &percentualReajuste);

    novoSalario = ((percentualReajuste * salarioMensalAtual) / 100) + salarioMensalAtual;

    printf("Seu salário com o reajuste vai ser de: R$%.2f", novoSalario);
}