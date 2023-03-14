// Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo. 


#include <stdio.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL, "");

    float base, altura, areaRetangulo;

    printf("Digite o valor da base de um retângulo..: ");
    scanf("%f", &base);

    printf("Digite o valor da altura de um retângulo: ");
    scanf("%f", &altura);

    areaRetangulo = base * altura;

    printf("A área total do retângulo é: %.2f m²", areaRetangulo);
}