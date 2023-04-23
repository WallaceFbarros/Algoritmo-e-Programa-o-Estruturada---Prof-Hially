// Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
// plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais
// após a vírgula, segundo a fórmula:

#include <stdio.h>
#include <locale.h>
#include <math.h>


int main () {

    setlocale(LC_ALL, "");

    int x1, y1, x2, y2;
    float distancia;

    printf("Insira quanto vale o eixo X em um plano qualquer: \n");
    scanf("%i", &x1);
    printf("Insira quanto vale o eixo Y em um plano qualquer: \n");
    scanf("%i", &y1);
    printf("Insira quanto vale o eixo X  no segundo ponto em um plano qualquer: \n");
    scanf("%i", &x2);
    printf("Insira quanto vale o eixo Y no segundo ponto em um plano qualquer: \n");
    scanf("%i", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4f", distancia);

};