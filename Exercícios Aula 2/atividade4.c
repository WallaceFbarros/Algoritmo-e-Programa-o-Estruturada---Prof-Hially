// Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). 
// O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.  


#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    char operador;
    int n1, n2, total;

    printf("---------------------CALCULADORA SIMPLES---------------------\n");
    printf("Essa calculadora funciona apenas com as 4 operações básicas.\n");
    printf("+ : Para adição.\n- : Para Subtração.\n* : Para Multiplicação\n/ : Para Divisão.\n");
    printf("Insira o símbolo que corresponde a operação que você quer fazer: ");
    scanf("%c", &operador);

    printf("Insira o dois valores que serão usados para realizar a operação: ");
    scanf("%i %i", &n1, &n2);

    switch (operador)
    {
    case '+':
        total = n1 + n2;
        printf("O Resultado da operação é: %i", total);
        break;
     case '-':
        total = n1 - n2;
        printf("O Resultado da operação é: %i", total);
        break;
    case '*':
        total = n1 * n2;
        printf("O Resultado da operação é: %i", total);
        break;
    case '/':
        total = n1 / n2;
        printf("O Resultado da operação é: %i", total);
        break;
    default:
        printf("O símbolo escolhido não é utilizado por esse programa.");
        break;
    }

}