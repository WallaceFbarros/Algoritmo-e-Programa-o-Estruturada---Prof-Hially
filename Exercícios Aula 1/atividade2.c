// Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.
    
#include <stdio.h>
#include <locale.h>

#define PI 3.14

int main () {

    setlocale(LC_ALL, "");

    float raioCirculo;

    printf("Digite um raio do círculo: ");
    scanf("%f", &raioCirculo);

    printf("Area do circulo é: %.2f\n", (raioCirculo * raioCirculo) * PI);
}