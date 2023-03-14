// Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias
// e mês com 30 dias. 


#include <stdio.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL, "");

    int idadeAnos, idadeMes, idadeDias, idadeTransformadaMeses, idadeTransformadaDias;

    printf("Digite sua idade em anos, meses e dias: ");
    scanf("%i %i %i", &idadeAnos, &idadeMes, &idadeDias);

    idadeTransformadaMeses = idadeAnos * 12;

    idadeTransformadaDias = (idadeTransformadaMeses * 30) + (idadeMes * 30) + idadeDias;

    printf("Sua idade transformada em dias é de: %i", idadeTransformadaDias);
}