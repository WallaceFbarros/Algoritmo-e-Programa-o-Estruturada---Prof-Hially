// Escreva uma função que receba por parâmetro dois números e retorne o maior deles.  


#include <stdio.h>
#include <locale.h>

int calcNumero(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
        }
    }

int main () {

    setlocale(LC_ALL, "");

    int n1=0, n2=0, maiorNum;

    printf("Insira dois números inteiros: ");
    scanf("%i %i", &n1, &n2);

    maiorNum = calcNumero(n1,n2);

    printf("O maior número entre os dois digitados é %i", maiorNum);

}
