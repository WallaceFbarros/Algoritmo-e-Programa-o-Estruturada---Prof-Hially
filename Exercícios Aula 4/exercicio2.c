// Desenvolva um programa que solicite as três notas das provas para cada estudante de uma turma em 
// determinada disciplina. Leia os valores na função principal e acione uma outra função (calculaMedia) 
// que realizará o cálculo da média aritmética para cada estudante informado. Apresente no programa principal 
// a média alcançada por cada estudante, conforme suas notas forem sendo informadas. 
// Lembre-se que não é permitido o uso de variáveis globais


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float calculaMedia(float n1, float n2, float n3) {
        float mediaAritmetica = (n1 + n2 + n3) / 3;

        return mediaAritmetica;
    }

int main () {

    setlocale(LC_ALL, "");

    int quantidadeAlunos, i;

    float nota1, nota2, nota3, media;

    printf("----------SISTEMA PARA OBTER A MÉDIA DOS ALUNOS----------\n");
    printf("Insira quantos alunos a sala tem: ");
    scanf("%i", &quantidadeAlunos);

    for(i = 0; i < quantidadeAlunos; i++) {
        printf("Insira as três notas do aluno: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        fflush(stdin);
        media = calculaMedia (nota1, nota2, nota3);
        printf("A média do aluno %i foi %.2f\n", i+1, media);
    }
}

    
