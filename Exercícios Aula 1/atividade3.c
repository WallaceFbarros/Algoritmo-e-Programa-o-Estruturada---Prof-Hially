//     Faça um programa que calcule a quantidade necessária de latas de tinta para pintar uma parede. 
//     O programa pergunta as medidas de largura e altura da parede em metros e escreve quantas latas de tinta serão necessárias para pintá-la. 
//     Considere que o consumo de tinta é de 300 ml por metro quadrado e a quantidade de tinta por lata é de 2 litros.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL, "");
    
    float alturaParede, larguraParede, areaTotalParede, latas, quantidadeTinta;

    printf("Digite a altura e a largura de uma parede em metros: ");
    scanf("%f", &alturaParede);
    scanf("%f", &larguraParede);

    areaTotalParede = alturaParede * larguraParede;

    quantidadeTinta = areaTotalParede * 300;

    latas = quantidadeTinta / 2000;

    double quantidadeFinalLatas = ceil(latas);

    printf("Serão necessárias %.2f latas de tinta para pintar toda a parede.", quantidadeFinalLatas);
}