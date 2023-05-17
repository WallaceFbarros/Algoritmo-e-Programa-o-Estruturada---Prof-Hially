#include <stdio.h>
#include <locale.h>

struct Aluno {
    char nome[50];
    int matricula;
    float mediaFinal;
};

int main() {
    struct Aluno alunos[10];
    struct Aluno aprovados[10];
    struct Aluno reprovados[10];
    int numAprovados = 0;
    int numReprovados = 0;

    printf("=== Entrada de dados dos alunos ===\n");
    for (int i = 0; i < 10; i++) {
        
        printf("Aluno %d:\n", i + 1);

        printf("Nome: ");
        fgets(alunos[i].nome, 50, stdin);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();

        printf("Média Final: ");
        scanf("%f", &alunos[i].mediaFinal);
        getchar();

        printf("\n");
    }

    for (int i = 0; i < 10; i++) {
        if (alunos[i].mediaFinal >= 5.0) {
            aprovados[numAprovados] = alunos[i];
            numAprovados++;
        } else {
            reprovados[numReprovados] = alunos[i];
            numReprovados++;
        }
    }

    printf("=== Alunos Aprovados ===\n");
    for (int i = 0; i < numAprovados; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s", aprovados[i].nome);
        printf("Matrícula: %d\n", aprovados[i].matricula);
        printf("Média Final: %.2f\n", aprovados[i].mediaFinal);
        printf("\n");
    }

    printf("=== Alunos Reprovados ===\n");
    for (int i = 0; i < numReprovados; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s", reprovados[i].nome);
        printf("Matrícula: %d\n", reprovados[i].matricula);
        printf("Média Final: %.2f\n", reprovados[i].mediaFinal);
        printf("\n");
    }

    return 0;
}