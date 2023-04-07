// Escreva uma funções que calculem a conversão entre diferentes escalas de temperatura. 
// Considere as fórmulas de conversão abaixo:

// • De graus Celsius(C) para graus Fahrenheit(F): F = (9 ∗ C/5) + 32)

// • De graus Fahrenheit (F) para graus Celsius (C): C = (F − 32) ∗ 5/9

// • De graus Celsius (C) para graus Kelvin (K): K = C + 273.15

// • De graus Kelvin (K) para graus Celsius (C): C = K − 273.15

// • De graus Celsius (C) para graus Réaumur (Re): Re = C ∗ 4/5

// • De graus Réaumur (Re) para graus Celsius (C): C = Re ∗ 5/4

// • De graus Kelvin (K) para graus Rankine (R): R = K ∗ 1.8

// • De graus Rankine (R) para graus Kelvin (K): K = R/1.8 

// Solicite o usuário para escolher a função desejada e apresente o resultado a partir da 
// chamada da função escolhida.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float celsiusToFah(float celsius) {
    float fahrenheit = ((9 * celsius) / 5) + 32;

    return fahrenheit;
    }

float fahToCelsius (float fahrenheit) {
    float celsius = ((fahrenheit - 32) * 5) / 9;

    return celsius;
}

float celsiusToKelvin (float celsius) {
    float kelvin = celsius + 273.15;
    return kelvin;
}

float kelvinToCelsius (float kelvin) {
    float celsius = kelvin - 273.15;
    return celsius;
}

float celsiusToReaumur (float celsius) {
    float reaumur = celsius * 4 / 5;
    return reaumur;
}

float reaumurToCelsiun (float reaumur) {
    float celsius = reaumur * 5 / 4 ;
    return celsius;
}

float kelvinToRankine (float kelvin) {
    float rankine = kelvin * 1.8;
    return rankine;
}

float rankineToKelvin (float rankine) {
    float kelvin = rankine / 1.8;
    return kelvin;
}

int main () {

    setlocale(LC_ALL, "");

    int tipoConversao;
    float celsius, fahrenheit, kelvin, reaumur, rankine, tempConvertida;

    printf("PROGRAMA PARA CONVERTER DIFERENTES TIPOS DE TEMPERATURAS\n");
    printf("1 - DE GRAUS CELSIUS(C) PARA GRAUS FAHRENHEIT(F) \n");
    printf("2 - DE GRAUS FAHRENHEIT(F) PARA GRAUS CELSIUS (C)\n");
    printf("3 - DE GRAUS CELSIUS (C) PARA GRAUS KELVIN(K)\n");
    printf("4 - DE GRAUS KELVIN (K) PARA GRAUS CELSIUS (C)\n");
    printf("5 - DE GRAUS CELSIUS (C) PARA GRAUS RÉAUMUR (Re) \n");
    printf("6 - DE GRAUS RÉAUMUR (Re) PARA GRAUS CELSIUS (C)\n");
    printf("7 - DE GRAUS KELVIN (K) PARA GRAUS RANKINE (R)\n");
    printf("8 - RANKINE (R) PARA GRAUS kELVIN (K)\n");
    printf("Digite o número que corresponde a conversão que voce deseja: ");
    scanf("%i", &tipoConversao);
    
    switch (tipoConversao)
    {
    case 1:
        printf("Qual a temperatura em graus celsius: ");
        scanf("%f", &celsius);
        tempConvertida = celsiusToFah(celsius);
        printf("A temperatura em Fahrenheit é %.2f", tempConvertida);
        break;
    case 2:
        printf("Qual a temperatura em graus Fahrenheit: ");
        scanf("%f", &fahrenheit);
        tempConvertida = fahToCelsius(fahrenheit);
        printf("A temperatura em Celsius é %.2f", tempConvertida);
        break;
    case 3:
        printf("Qual a temperatura em graus celsius: ");
        scanf("%f", &celsius);
        tempConvertida = celsiusToKelvin(celsius);
        printf("A temperatura em Kelvin é %.2f", tempConvertida);
        break;
    case 4:
        printf("Qual a temperatura em graus Kelvin: ");
        scanf("%f", &kelvin);
        tempConvertida = kelvinToCelsius(kelvin);
        printf("A temperatura em Celsius é %.2f", tempConvertida);
        break;
    case 5:
        printf("Qual a temperatura em graus Celsius: ");
        scanf("%f", &celsius);
        tempConvertida = celsiusToReaumur(celsius);
        printf("A temperatura em Réaumur é %.2f", tempConvertida);
        break;
    case 6:
        printf("Qual a temperatura em graus Réaumur: ");
        scanf("%f", &reaumur);
        tempConvertida = reaumurToCelsiun(reaumur);
        printf("A temperatura em Celsius é %.2f", tempConvertida);
        break;
    case 7:
        printf("Qual a temperatura em graus Kelvin: ");
        scanf("%f", &kelvin);
        tempConvertida = kelvinToRankine(kelvin);
        printf("A temperatura em Rankine é %.2f", tempConvertida);
        break;
    case 8:
        printf("Qual a temperatura em graus Rankine: ");
        scanf("%f", &rankine);
        tempConvertida = rankineToKelvin(rankine);
        printf("A temperatura em Kelvin é %.2f", tempConvertida);
        break;
    default:
        printf("Você digitou um número diferente da guia dada, inicie o programa novamente");
        break;
    }

}
