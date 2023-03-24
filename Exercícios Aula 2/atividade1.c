// Faça um programa que leia um número e, caso ele seja positivo, 
// calcule e mostre: o número digitado ao quadrado e raiz quadrada do número digitado.


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "");

    int numero, quadrado;
    float raiz;


    printf("Insira um número: ");
    scanf("%i", &numero);

    if (numero >= 0) {
        quadrado = pow(numero,2);
        raiz = sqrt(numero);
        printf("O número é positivo, logo ele será elevado ao quadrado e será tirada a sua raiz quadrada.\n");
        printf("1º - o número digitado ao quadrado ficará: %i\n 2º - A raiz quadrado do número digitado é: %.2f", quadrado, raiz);
    } else {
        printf("Não será possível fazer os cálculos pelo fato do número digitado ser negativo. :(");
    }
}
