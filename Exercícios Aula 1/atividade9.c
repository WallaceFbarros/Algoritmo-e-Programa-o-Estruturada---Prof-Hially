// Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. 
// Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. 
// Fórmula para o cálculo da média final é: 


#include <stdio.h>
#include <locale.h>


int main () {

    setlocale(LC_ALL, "");

    float nota1, nota2, nota3, mediaFinal;

    printf("Insira as três notas do aluno: ");
    scanf("%f %f %f", &nota1,&nota2,&nota3);

    mediaFinal = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

    printf("A média final ponderada do aluno foi de: %.2f", mediaFinal);
}