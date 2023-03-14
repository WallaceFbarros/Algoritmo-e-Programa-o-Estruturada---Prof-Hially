// Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas 
// por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. 
// Calcule e escreva o salário final do vendedor. 


#include <stdio.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL, "");

    int numeroCarrosVendidos;
    float totalVendas, salarioFixo, valorPorCarro, salarioFinal;

    printf("Insira a quantidade de carros vendidos pelo funcionário: ");
    scanf("%i", &numeroCarrosVendidos);

    printf("Insira o total das vendsas realizadas pelo funcionário.: ");
    scanf("%f", &totalVendas);

    printf("Insira o salário fixo do funcionário...................: ");
    scanf("%f", &salarioFixo);

    printf("Insira o valor da comissão que o funcionário recebe....: ");
    scanf("%f", &valorPorCarro);

    salarioFinal = salarioFixo + (valorPorCarro * numeroCarrosVendidos) + (totalVendas * 0.05);

    printf("O salário final do funcionário foi de: R$%.2f", salarioFinal);
}