//DESAFIO BHASKARA

#include <stdio.h>
#include <locale.h>
#include <math.h>


int main () {

    setlocale(LC_ALL, "");

    double n1, n2, n3, delta, r1,r2;

    printf("Insira os três valores necessários para calcular a fórmula de Bhaskara na ordem de A B C:  ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    delta = pow(n2,2) - (4 * n1 * n3);

    r1 = ((-n2) + (sqrt(delta))) / (2*n1);
    r2 = ((-n2) - (sqrt(delta))) / (2*n1);

    if (delta <= 0 || n1 == 0 || n2 == 0 || n3 == 0) {
        printf("Infelizmente não é possível calcular com os valores dados.\n");
    }
    else {
        printf("R1 = %.2lf. \n R2= %.2lf", r1, r2);
    }
}